//
//  AUTHOR: Cole Walgren
//  TITLE: Program 2
//  DESCRIPTION: Header file for LLN.cpp
//

#ifndef LLN_hpp
#define LLN_hpp

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "LL.h"
using namespace std;

class LL;
class LLN {
private:
    
public:
    string data;
    LLN* next;
    LLN (string s, LLN *n);
    void print();
    void addback(string s);
    string alphabeticalfirst();
    void removeall(string s, LLN* prev, LL* L);
    void setnext(LLN* p);
    LLN* split();
    ~LLN();
    LLN* merge(LLN* other);
    LLN* getnext();
    string getdata();
    LLN* mergesort();
    void iSortNode(LLN* prev, LL* list);
    void swapTwo(LLN* prev, LLN* node, LLN* nex, LL* list);
    //string toLower(string s);
    string Cap(string s);
    bool compare(LLN* node1, LLN* node2);
    //void deleteAll();
};
#endif /* LLN_hpp */
