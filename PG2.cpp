//
//  AUTHOR: Cole Walgren
//  TITLE: Program 2
//  DESCRIPTION: User enters a series of words, these words are then sorted
//  alphabetically, and returned to the user
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "PG2.h"
#include "LLN.h"
#include "LL.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    LL* list = new LL();
    
    // user enters words, blank line when finished
    cout << "Enter a series of words, press enter when you are finished: " << endl;
    string word = " ";
    while(word != ""){
        getline(cin,word);
        list->addback(word);
        
    }
    
    cout << "The linked list contains: " << endl;
    list->print();

    cout << endl << "After insertion sort, the linked list contains: " << endl;
    list->insertSortList(); // insert sort the list
    list->reverse(); // reverse the order of the list
    list->print(); // print out the final result
    
    delete list;
    
    return 0;
}

