// DMA :- Also Known As Dynamic Memory Allocation In C++ Programming Language
/* Dynamic Memory Allocation Allows Us To Allocate Memory At Runtime, Which Is Not Possible With Static Memory Allocation.  
Uses Heap Memory When Stack Memory Is Full 

Stack- Lifetime  is controlled by scope mechanism 
Heap- Lifetime is controlled by the programmer thorugh explicitally new and delete operation */


#include <iostream>
using namespace std;
int main() { 
    int *ptr = new int(10); // DMA For Integer Type Variable
    cout << "Value of ptr: " << ptr << endl;
    delete ptr; // Deallocate the dynamically allocated memory
    return 0;  // Necessary to free the memory allocated on the heap to avoid memory leaks
}