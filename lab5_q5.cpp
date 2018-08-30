#include<iostream>
using namespace std;
int main(){
// to find whether the number is even or odd
// declaration of variables 
// assigning values to it
// using if and else  for the conditionals
 int a,b;
  cout << "enter number = " <<endl;
  cin >> a; 
  b=a%2;
        if (b==0){
                  cout << " the entered number is even" << endl;
                 }
       else {
             cout << " the entered number is  odd " << endl;
            } 
 
 return 0;
}
