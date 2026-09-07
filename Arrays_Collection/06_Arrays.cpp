// Today We Will Learn About Arrays in C++
// An Array is a collection of similar data types which are stored in contiguous memory locations

#include <iostream>
using namespace std;

int main()
{
    // Example of declaring and initializing an array
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}