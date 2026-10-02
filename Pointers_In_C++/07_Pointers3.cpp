// Here We Will Do More Examples Related To Newer Concepts Like  Dangling Pointers, Wild Pointers, and Null Pointers in C++ 
/* Dangling Pointers :- Pointers  That Points To A Memory Location That Has Been Deleted Or Deallocated Is Called Dangling Pointer. 
   Wild Pointers :- Pointers That Are Not Initialized And Point To Some Random Memory Location Is Called Wild Pointer.
   Null Pointers :- A Pointer That Is Not Assigned Any Address And Points To Nothing Is Called Null Pointer. */

#include <iostream>
using namespace std;

int main() {
    int *ptr1;  // Wild Pointer Declaration 
    int *ptr2{nullptr};  // Null Pointer Declaration and Initialization
    int *ptr3;  // Dangling Pointer Declaration
    int a = 10; // Normal Variable
    int *ptr4 = new int(20); // Normal Pointer Declaration and Initialization
    ptr1 = &a; // Wild Pointer Initialization with address of a
    ptr3 = ptr4; // Dangling Pointer Initialization with address of ptr4
    delete ptr4; // Deleting the memory allocated to ptr4, making ptr3 a dangling pointer
    cout << "Value of a: " << a << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Value of ptr3: " << ptr3 << endl;
    cout << "Value Of ptr4:" << ptr4 << endl;
    return 0;
}