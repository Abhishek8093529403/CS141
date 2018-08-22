//Write a C++ program to enter temperature in Celsius and convert it into Fahrenheit. 
#include<iostream>
using namespace std;
int main(){
int c;//declaration
cout << "convert the celsius into fahrenheit" << endl;
  //ask for the temperature in celsius
cout << "enter the value of temperature in ";
//assign the formula
cout << "celsius = ";
cin >> c;
 float f = (1.8*c)+32;
cout << "temperature at fahrenheit = " << f << endl;//
return 0;
}
