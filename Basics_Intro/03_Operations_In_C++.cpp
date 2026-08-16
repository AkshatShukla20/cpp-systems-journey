/* Now Let's talk About Operations In C++, There Are Few types Of Opertators In C++, 
1. Basic Operations (+,-,*,%,/)
2. Compuound Operations - uses 2 operators at once (+=, -=)
3. Realtional Operators - Used too find relations and compare   (==), ( <, >, <=, >=, !)
4. Logical Operations- Used In Boolean Algebra They Are AND(&&), OR(||), NOT(!) */


//Usage Of Operators 
#include<iostream>
using namespace std; // Trick to avoid using std:: everywhere 
int main() {
    int a = 100, b = 20; 
    cout<< "Sum is " << a + b << endl;
    cout<< "Difference Is " << a - b << endl;
    cout << "Prouduct Is " << a * b << endl;
    cout << "Division Is " << a/b << endl;
    cout << "Modulus is " << a % b << endl; // shows Remainder 
    cout << " A is greater than B :  " << bool ( a > b) << endl; // returns 1 if true 
    
}

//Post Your Examples Too And Try More Stuff 