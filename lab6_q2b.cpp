//write a program with a function that takes two parameters adds them together,then return the sum.call the funcn (call by reference)
#include<iostream>
using namespace std;
// ask user to enter two numbers
// call the function
//number as arguement 
// tell the sum to user
	int ask (int& a, int& b)
 	 	{
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
	 		 
 		}
	void sum (int& a, int& b)
 	 	{
			 
	 		 int sum = a+b;
	 		 cout<< "sum = "<< sum <<endl;
 		}
//driver function
	int main ()
	 	{
//call by reference
	 	  	int a,b;
			ask (a,b);
	 	  	sum(a,b);
//get the sum
	 	  	return 0;
		}
 
