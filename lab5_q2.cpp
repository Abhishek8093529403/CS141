//Write a C++ program to find maximum between three numbers
#include<iostream>
using namespace std;
int main(){
// declaration of variables 
// assigning values to it
// using if and else  for the conditionals
  int a,b,c;

  cout << "first number = " << endl;
  cin >> a; 
  cout << "second number = " << endl;
  cin >> b;
  cout << "third number = " << endl;
  cin >> c; 
  if(a>b){
             if(a>c)
		{
                        cout << " first number is greatest" << endl;
                }
            else{ 
                       cout << " third one is greatest" << endl;
                }
             }
      else{
             if(b>c){
                        cout << " second number is greatest" << endl;
                       }
            else{ 
                       cout << " third one is greatest" << endl;
                  }
            }
  return 0;
  
}
