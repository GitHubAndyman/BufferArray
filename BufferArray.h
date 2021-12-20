// File:    BufferArray.h 
// Project: CSIS 3400 Assignment 2
// Author:  Andrew Nguyen 
// History: Version 1.0 Sept 12, 2021
#include <iostream>


using namespace std;

class BufferArray {
private:
    int Buffer_Size = 8;
    int* intArray;
    int numberOfelements = 0;
    int locationOf(int target);
public:
    BufferArray();
    bool Insert(int val);
    bool Remove(int val);
    bool Find(int target);
    void display();
    bool stableRemove(int val);
};