// File:    BufferArray.cpp 
// Project: CSIS 3400 Assignment 2
// Author:  Andrew Nguyen 
// History: Version 1.0 Sept 12, 2021
#include "BufferArray.h"




BufferArray::BufferArray()
{
    intArray = new int[Buffer_Size];
}
// LocationOf Function
int BufferArray::locationOf(int target)
{
    for (int x = numberOfelements; x > 0; x--) {
        if (intArray[numberOfelements - x] == target) {
            return (numberOfelements - x);
        }

    }
    return -1;
}
//Insert Function
bool BufferArray::Insert(int val)
{
    if (numberOfelements < Buffer_Size) {
        intArray[numberOfelements] = val;
        numberOfelements++;
        return true;
    }
    else {
        cout << "Insertion exceeds maximum defined size of array!!" << endl;
    }
    return false;
}
//Remove Function
bool BufferArray::Remove(int val)
{
    if (Find(val) == true) {
        int index = locationOf(val);
        intArray[index] = intArray[numberOfelements - 1];
        numberOfelements--;
        return true;
    }
    else {
        cout << "Specified value does not exist!" << endl;
        return false;
    }



}
//Find Function
bool BufferArray::Find(int target)
{
    int index = locationOf(target);
    if (index != -1) {
        cout << "Value was in " << index + 1 << endl;
        return true;
    }
    else {
        return false;
    }

}
//Display Function
void BufferArray::display()
{
    for (int x = numberOfelements; x > 0; x--) {
        if (x > 1) {
            cout << intArray[numberOfelements - x] << ", ";
        }
        else {
            cout << intArray[numberOfelements - x] << endl;
        }
    }
}
//Stable Remove Function
bool BufferArray::stableRemove(int val)
{
    int index = locationOf(val);
    int temp = intArray[0];
    if (index != -1) {

        for (int x = index; x < numberOfelements; x++) {
            intArray[x] = intArray[x + 1];
        }
        numberOfelements--;
        cout << "Removed value: " << val << endl;
        return true;
    }
    else {
        cout << "Specified value does not exist!" << endl;
        return false;
    }


}