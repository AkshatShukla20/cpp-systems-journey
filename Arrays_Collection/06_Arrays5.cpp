// Finding Sum of each row and column of a 2D Array
#include <iostream>
using namespace std;
int main () {
    int arr1[2][2] = {{ 1, 2}, {3, 4}};
    int rowSum[2] = {0};
    int colSum[2] = {0};

    for( int i = 0; i < 2; i++) {
        for( int j = 0; j < 2; j++) {
            rowSum[i] += arr1[i][j];
            colSum[j] += arr1[i][j];
        }
    }
    cout << "Row Sums: ";
    for( int i = 0; i < 2; i++) {
        cout << rowSum[i] << " ";
    }
    cout << endl;
    cout << "Column Sums: ";
    for( int j = 0; j < 2; j++) {
        cout << colSum[j] << " ";
    }
    cout << endl;
}