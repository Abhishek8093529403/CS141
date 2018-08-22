 //Write a C++ program to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c,n;//declaration of variables
cout << "calculate compound Interest" << endl;
// ask for values of P R T
cout << "enter the values " << endl; 
cout <<"P = ";
 cin >> a;
cout <<"R = ";
cin >> b;
cout <<"T = ";
cin >> c;
cout <<"N = ";
cin >> n;
// getting the interest
  double d = (a)*(pow((1+(b/n)),(c*n)));
cout << "compound interest = " << d << endl;//the value 
return 0;
}
