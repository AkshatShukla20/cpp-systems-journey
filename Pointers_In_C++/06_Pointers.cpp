// Pointers are special variables that stores address of other variables 
// Let's Look at the syntax and use cases of pointers in C++ programming language

#include <iostream>
using namespace std; 
int main() {
    int a = 10; // Normal Variable
    int *ptr; // Pointer Variable Declaration
    int *ptr2{nullptr}; // Pointer Variable Declaration with nullptr initialization
    ptr = &a; // Pointer Variable Initialization with address of a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    return 0;
}
    