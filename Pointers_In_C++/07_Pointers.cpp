// Here We Will Learn More About Pointers In C++ Programming Language

#include <iostream>
using namespace std;

int main() {
    int x = 10; // Normal Variable
    char ch = 'A'; // Normal Variable of char type
    int *ptr; // Pointer Variable Declaration
    char *p_char; // Pointer Variable Declaration for char type
    ptr = &x; // Pointer Variable Initialization with address of x
    p_char = &ch; // Pointer Variable Initialization with address of ch
    cout << "Value of x: " << x << endl;
    cout << "Value of ch: " << ch << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Address of ch: " << p_char << endl;
}