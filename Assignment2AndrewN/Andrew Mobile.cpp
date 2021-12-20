// Andrew Mobile.cpp : This file contains the 'main' function. Program runs here.
//
// File:    Andrew Mobile.cpp 
// Project: CSIS 3400 Assignment 2
// Author:  Andrew Nguyen 
// History: Version 1.0 Sept 12, 2021
#include <iostream>
#include "BufferArray.h"


int main()
{
    BufferArray BA;
    while(true) {
        int call;
        int val;
        cout << "What function? (Insert (0), Remove (1), stableRemove (2), display (3), Find (4).)" << endl;
        cin >> call;
        switch (call) {
            case 0:
                
                cout << "What value to insert?" << endl;
                cin >> val;
                
                system("CLS");
                BA.Insert(val);
                break;
            case 1:
                
                cout << "What value to remove?" << endl;
                cin >> val;
                system("CLS");
                BA.Remove(val);
                break;
            case 2:
                
                cout << "What value to stable remove?" << endl;;
                cin >> val;
                system("CLS");
                BA.stableRemove(val);
                break;
            case 3:
                system("CLS");
                BA.display();
                break;
            case 4:
                
                cout << "What value to find?" << endl;
                cin >> val;
                system("CLS");
                BA.Find(val);
                break;

        }
    }
    
}


/*
int main()
{
    BufferArray BA;
    BA.Insert(0);
    BA.Insert(1);
    BA.Insert(2);
    BA.Insert(6);
    BA.Insert(4);
    BA.Insert(20);
    BA.display();
    BA.Find(4);
    if (BA.Find(4) == true) {
        cout << "Found 4!" << endl;
    }

    if (BA.Find(7) == false) {
        cout << "Does not exist" << endl;
    }
    if (BA.Remove(2) == true) {

        cout << "New array as follow" << endl;
        BA.display();
    }
    else {
        cout << "Specified value does not exist!!" << endl;
    }
    BA.Insert(99);
    BA.Insert(20392);
    BA.Insert(12);
    BA.display();
    BA.Insert(10);
    BA.stableRemove(20392);

    if (BA.stableRemove(28)) {
        cout << "Removed";
    }
    BA.display();
}
*/

/*int main()
{ BufferArray arr;
arr.Insert(2);
arr.Insert(4);
arr.Insert(3);
arr.Insert(1);
arr.display();
arr.Insert(6);
arr.display();
arr.Find(1);
arr.Remove(3);
arr.display();
arr.Insert(3);
arr.stableRemove(4);
arr.display();
return 0; }
*/