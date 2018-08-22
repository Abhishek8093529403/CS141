//. Write a C++ program to enter two angles of a triangle and find the third angle. 
#include<iostream>
using namespace std;
int main(){
int a;//declaration of variables
int b;
cout << "write a program to find third angle of triangle if two are known" << endl;
// ask for angles
cout << "enter the angles" << endl; 
cout <<"first angle = ";
 cin >> a;
cout <<"second angle = ";
cin >> b;
// getting the other angles
  float c = 180.00 - (a+b);
cout << "third angle = " << c << endl;//the value of third angle
return 0;
}
