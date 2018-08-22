//Write a C++ program to calculate area of an equilateral triangle. 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a;//declaration of variables
cout << "write a program to find area of equilateral triangle" << endl;
// ask for value of a side
cout << "enter the value of a side " << endl; 
cout <<" side = ";// asking for side
 cin >> a;

// getting area
  double c = (sqrt(3.0/4.0))*a*a;
cout << "The area of triangle is = " << c << endl;
return 0;
}

