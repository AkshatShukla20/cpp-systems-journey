/* In this one we will practice some conditional programming, A Useful foundation in programming where we use 3 conditions
If, Else If, Else...let's look at them one by one with examples*/


// If Statement Structure With Else If And Else 

#include<iostream>
using namespace std;
int main() {
    int age;
    cout<< "Enter your age" << endl;
    cin>> age ;
    if(age >= 18) {
        cout<< "eligible to vote"<< endl;
    }
    else if( age < 0) {
        cout<< "enter valid age"<< endl;
    }
    else {
        cout<< "Not Eligible" << endl;
    }
}