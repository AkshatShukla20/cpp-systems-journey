// Now Lets Print the Array Elements
// We Can Use For Loop to Print the Array Elements
// We Will ALso Print 2d Array Elements

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Array Elements are : "<< endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return 0;


    int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "2D Array Elements are : " << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}