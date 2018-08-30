//Write a C++ program to check whether a number is divisible by 5 and 11 or not. 
#include<iostream>
using namespace std;
int main(){ 
// declaration of variables 
// assigning values to it
// using if and else  for the conditionals
  int a,b;
  cout << "enter number = " <<endl;
  cin >> a; 
  b=a%55;
       if (b==0){
                 cout << " the entered number is divisible by 5 and 11" << endl;
                }
      else {
             cout << " the entered number is  not divisible by 5 and 11" << endl;
            } 
 
  return 0;
}
