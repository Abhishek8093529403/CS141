//write a program with a function that takes two parameters then return the maximum one.call the funcn (call by value)
#include<iostream>
using namespace std;
// ask user to enter two numbers
// call the function
//number as arguement 
// tell the maximum to user
	void askMax (int a, int b)
 	 	{
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
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
//call by value
	 	  	int a,b;
	 	  	askMax(a,b);
//get the max
	 	  	return 0;
		}
 
