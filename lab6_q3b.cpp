//write a program with a function that takes two parameters then return the maximum.call the funcn (call by reference)
#include<iostream>
using namespace std;
// ask user to enter two numbers
// call the function
//number as arguement 
// tell the maximum to user
	int ask (int& a, int& b)
 	 	{
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
	 		 
 		}
	void Max (int& a, int& b)
 	 	{
			 
	 		  if (a > b)
                                {
				 cout<< " first number is maximum is "<<a<<endl;
  				}
				else
                                {
				 cout<< " second number is maximum is "<<b<<endl;
  				}
 		}
//driver function
	int main ()
	 	{
//call by reference
	 	  	int a,b;
			ask (a,b);
	 	  	Max(a,b);
//get the max
	 	  	return 0;
		}
 
