// Write a C++ program to enter P, T, R and calculate Simple Interest. 
#include<iostream>
using namespace std;
int main(){
int a,b,c;//declaration of variables
cout << "calculate Simple Interest" << endl;
// ask for values of P R T
cout << "enter the values " << endl; 
cout <<"P = ";
 cin >> a;
cout <<"R = ";
cin >> b;
cout <<"T = ";
cin >> c;
// getting the interest
 double  d = (a*b*c)/100.00;
cout << "simple interest = " << d << endl;//the value 
return 0;
}
