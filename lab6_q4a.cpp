//write a program with a function that takes two parameters then return the minimum one.call the funcn (call by value)
#include<iostream>
using namespace std;
// ask user to enter two numbers
// call the function
//number as arguement 
// tell the minimum to user
	void askMin (int a, int b)
 	 	{
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
		 		 if (a < b)
                                {
				 cout<< " first number is minimum is "<<a<<endl;
  				}
				else
                                {
				 cout<< " second number is minimum is "<<b<<endl;
  				}
 		}
//driver function
	int main ()
	 	{
//call by value
	 	  	int a,b;
	 	  	askMin(a,b);
//get the min
	 	  	return 0;
		}
