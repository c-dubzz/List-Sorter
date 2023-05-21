//
//  AUTHOR: Cole Walgren
//  TITLE: Program 2
//  DESCRIPTION: This file handles all the processes involving the linked
//  list itself.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "LL.h"
#include "LLN.h"
using namespace std;

LL::LL () {
    
    //each list has a head
    
    head = nullptr;
}

void LL::addback(string s) {
    
    //adds a new node with data "s", to the list
    
    if (!head) head = new LLN(s, nullptr);
    else head->addback(s); 
}

void LL::insertSortList(){
    
    // insert sort (recursively) until you reach the end of list
    
    if(head){
        head->iSortNode(NULL, this);

    }else{
        return;
    }
}

void LL::print() {
    
    // prints out list
    
    if (head) head->print();
}

void LL::reverse(){
    
    // reverses the order of the list
    
    LLN* curr = head, * prev = nullptr, * next = nullptr;
    while(curr != nullptr){
        next = curr->getnext();
        curr->setnext(prev);
        prev = curr;
        curr = next;
    }
    head = prev;
}

void LL::sethead(LLN* p) {
    
    // sets the head of the linked list to "p"

    head = p;
}

LL::~LL() {
    
    // destructor method
    delete head;
}



