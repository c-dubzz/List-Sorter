//
//  AUTHOR: Cole Walgren
//  TITLE: Program 2
//  DESCRIPTION: This file handles all the processes involving
//  the individual nodes of the linked list.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "LLN.h"
#include "LL.h"
using namespace std;

LLN::LLN(string s, LLN* n) {
    
    //each node has a "next" of type node and "data" of type string

    data = s;
    next = n;
}

void LLN::print() {
    
    //recursively prints nodes

    cout << data << endl;
    if (next) next->print();
}

void LLN :: addback(string s) {
    
    //adds node with data "s" to end of list
    
    if (!next) next = new LLN(s, nullptr);
    else next->addback(s);
}

void LLN::setnext(LLN* p) {
    
    //sets nodes next to "p"

    next = p;
}

LLN::~LLN() {
    
    //destructor method
    
    delete next;
}

LLN* LLN::getnext() {
    
    //returns nodes next

    return next;
}

string LLN::getdata() {
    
    //returns nodes data

    return data;
}

void LLN::iSortNode(LLN* prev, LL* list){
    
    // recursively sorts through till end of
    // list, calls swapTwo if conditions are met
    
    if(!next){
        return;
    } else {
        next->iSortNode(this, list);
    }
    
    if(this->getnext() && compare(this, this->getnext())==true){
        swapTwo(prev, this, this->getnext(), list);
    }
    return;
}

bool LLN::compare(LLN* node1, LLN* node2){
    
    // converts each nodes data to lowercase and then compares
    // returns true if a > b
    // else return false
    
    
    //convert each to lowercase
    string a = node1->getdata();
    string b = node2->getdata();
    
    string a2, b2;
    
    for(int i = 0; i < a.length(); i++){
        char c = a[i];
        if(c > 90) c = c-32; // if not cap, decrease ascii value
        a2 = a2 + c;
    }
    for(int i = 0; i < b.length(); i++){
        char d = b[i];
        if(d > 90) d = d-32; // if not cap, decrease ascii value
        b2 = b2 + d;
    }
    
    // if a > b, return true
    if(a2 > b2){
        return true;
    }
    
    return false;
}

void LLN::swapTwo(LLN* prev, LLN* node, LLN* nex, LL* list){
    
    // swaps the position of node and next, adjusting pointers
    // accordingly
    
    if(prev){
        prev->setnext(nex);
    }else{
        list->sethead(nex);
    }
    
    if(nex->getnext()){
        node->setnext(nex->getnext());
    }else{
        node->setnext(nullptr);
    }
    
    nex->setnext(node);
    
    if(node->getnext()){
        
        if(compare(node->getnext(), node)==true){
            swapTwo(nex, node, node->getnext(), list);
        }
    }
        return;
}
