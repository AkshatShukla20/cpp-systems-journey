// Let's Test Some 2D Array Operations 
// Matrix Addition, Subtraction, and Multiplication

#include <iostream>
using namespace std;
int main () {
    int arr1[3][3] = {{ 1, 2, 3} , { 4, 5, 6}, { 7, 8, 9}};
    int arr2[3][3] = {{ 9, 8, 7} , { 6, 5, 4}, { 3, 2, 1}};
    int sum[3][3], diff[3][3], prod[3][3];


    // Matrix Addition 
    for( int i = 0; i  < 3; i++) {
        for( int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << "Sum of Matrix Elements at position [" << i << "][" << j << "] is : " << sum[i][j] << endl;
            
        }
    }
// Matrix Subtraction
    for( int i = 0; i  < 3; i++) {
        for( int j = 0; j < 3; j++) {
            diff[i][j] = arr1[i][j] - arr2[i][j];
            cout << "Difference of Matrix Elements at position [" << i << "][" << j << "] is : " << diff[i][j] << endl;
        }
    }
// Matrix Multiplication
    for( int i = 0; i  < 3; i++) {
        for( int j = 0; j < 3; j++) {
            prod[i][j] = 0;
            for( int k = 0; k < 3; k++) {
                prod[i][j] += arr1[i][k] * arr2[k][j];
                cout << "Product of Matrix Elements at position [" << i << "][" << j << "] is : " << prod[i][j] << endl;
            }
        }
    }
}