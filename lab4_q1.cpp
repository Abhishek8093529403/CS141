//Write a C++ program to enter length in centimeter and convert it into meter and kilometer. 
#include<iostream>
using namespace std;
int main(){
int l;//declaration
cout << "write a program for convertion of length in centimeter to meter and kilometer" << endl;
// ask for length in centimeter
cout << "enter length in centimeter = "; 
 cin >> l;
// assign the formula to get the length in meter and kilometer
  float m = l/100.00;
   float km = m/1000.00;
cout << "show length in meter = " << m << "m" << endl;//length in meter
cout << "show length in kilometer = " << km << "km" << endl;//length in kilometer
return 0;
}
