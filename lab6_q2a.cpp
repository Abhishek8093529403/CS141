//write a program with a function that takes two parameters adds them together,then return the sum.call the funcn (call by value)
#include<iostream>
using namespace std;
// ask user to enter two numbers
// call the function
//number as arguement 
// tell the sum to user
	void askSum (int a, int b)
 	 	{
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
	 		 int sum = a+b;
	 		 cout<< "sum = "<< sum <<endl;
 		}
//driver function
	int main ()
	 	{
//call by value
	 	  	int a,b;
	 	  	askSum(a,b);
//get the sum
	 	  	return 0;
		}
 
