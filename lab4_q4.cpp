//Write a C++ program to convert days into years, weeks and days. 
#include<iostream>
using namespace std;
int main(){
int a,b,c,d;//declaration of variables
cout << "write a program to convert days into year, weeks and days." << endl;
// ask for days
cout << "enter the value of days" << endl; 
cout <<" Days = ";// asking for days
 cin >> a;
 b = a/365;
 c = (a%365)/7;
 d = (a%365)%7;
cout << " year " << b << " weeks " << c << " days " << d <<endl;
return 0;
}
