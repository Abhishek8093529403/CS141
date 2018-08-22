//Write a C++ program to enter base and height of a triangle and find its area. 
#include<iostream>
using namespace std;
int main(){
int b;//declaration of variables
int h;
cout << "write a program to find area of triangle if two are known" << endl;
// ask for base and height
cout << "enter the value of base and height" << endl; 
cout <<" base = ";// asking for base
 cin >> b;
cout <<" height = ";//asking for height
cin >> h;
// getting area
  double c = 0.5*(b*h);
cout << "The area of triangle is = " << c << endl;
return 0;
}






