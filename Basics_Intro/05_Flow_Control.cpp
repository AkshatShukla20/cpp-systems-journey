/* The Usage Of Flow Control Or looping statements will be seen in  this chapter 
Flow Control Statements Are For, while and Do While loop 
Let's Go Through With Their Syntax And Use cases */


#include<iostream>
using namespace std;
int main(){
  int i, j, n , b, count;
  cout<< "enter the range"<< endl;
  cin>> n;
  for ( i = 0; i < n ; i++)  // For loop have Initialization, Condition, Execution  Model
  {
    cout<< "I Love C++"<< endl; // ++i is prefix and i++ is postfix
  }
  cin>> b;
while ( b < n) { // Checks Condition First before execution 
    cout<< "I Love Embedded Systems"<< endl;
    b++;
}
 count = 10;
 j = 0;
do{
cout<< "I hate nothing" << endl;
j++;
} while ( j < count);
}