//Write a C++ program to enter temperature in Fahrenheit and convert to Celsius.
#include<iostream>
using namespace std;
int main(){
int f;//declaration
cout << "convert the fahrenheit into celsius" << endl;
  //ask for the temperature in celsius
cout << "enter the value of temperature in ";
//assign the formula
cout << "fahrenheit = ";
cin >> f;
 float c = (f - 32)/1.8;
cout << "temperature at celsius = " << c << endl;
return 0;
}
