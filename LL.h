//
//  AUTHOR: Cole Walgren
//  TITLE: Program 2
//  DESCRIPTION: Header file for LL.cpp
//

#ifndef LL_hpp
#define LL_hpp

#include <iostream>
#include <string>
#include <cstdlib>
#include "LLN.h"
using namespace std;

class LLN; //since LL makes use of LLN, you should #include the LLN stuff AND make a class prototype of LLN stuff.
class LL {
    
private:
    
public:
    LLN* head;
    LL ();
    void print();
    void reverse();
    void addback(string s);
    string alphabeticalfirst();
    void removeall(string s);
    void sethead(LLN* p);
    void mergesort();
    void insertSortList();
    ~LL();
};
#endif /* LL_hpp */
