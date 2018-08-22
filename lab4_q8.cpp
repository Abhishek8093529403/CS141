// Write a C++ program to enter marks of five subjects and calculate total, average and percentage. 
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,f,g,h;//declaration of variables
cout << "to enter marks of five subjects and calculate total, average and percentage" << endl;
// ask for marks
cout << "enter the marks " << endl; 
cout <<"PHY = ";
 cin >> a;
cout <<"CHEM = ";
cin >> b;
cout <<"BIO = ";
 cin >> c;
cout <<"MATH = ";
cin >> d;
cout <<"CS = ";
 cin >> e;

// getting the average  total %
  f = a+b+c+d+e;
 g = f/5;
 h = g; // if each paper is of 100
cout << "total = " << f <<endl;
cout << "average = " << g <<endl;
cout << "percentage = " << h << "%" << endl;
return 0;
}
