//include the necessary library
#include<iostream>
using namespace std;
//declarimg the main function
int main()
{
    int value ;
    // declaring variables of all types
int a,b;
    float floatvar = 0.25;
double doublevar = 1.2;
     bool boolvar = true;
char character = 'C';
 cout << floatvar<< endl;
 cout << doublevar<<endl;
 cout << boolvar<<endl;
 cout << character<<endl; 
//displaying the sizes of data types.
cout << "size of a = " << sizeof(a) << endl;
cout << "size of doublevar = " << sizeof(doublevar) << endl;
cout << "size of floatvar = " << sizeof(floatvar) << endl;
cout << "size of boolvar = " << sizeof(boolvar) << endl;
cout << "size of character = " << sizeof(character) << endl;

}

