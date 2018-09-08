//UpperCase and LowerCase 
#include<iostream>
using namespace std;
// ask user to enter the characters
// call the functions
// characters as arguement 
// tell the result to user
//Write a function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
void toUpper(char a)
 	 	{
           
           cout<<"Enter a character in lowercase: "; 
           cin>>a;
           a=a-32;
           cout<<"Entered character in uppercase: "<<a<<endl;
 		}
 		
void toLower(char a)
 	 	{
           
           cout<<"Enter a character in uppercase: "; 
           cin>>a;
           a=a+32;
           cout<<"Entered character in lowercase: "<<a<<endl;
 		} 
//driver function
	    int main ()
	 	{
//call by value
	 	  	int a;
	 	  	toLower(a);
	 	  	toUpper(a);
	 	  	
//get the sum
	 	  	return 0;
		} 		
 		