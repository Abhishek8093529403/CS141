//Write a C++ program to find GCD (HCF) of two numbers using recursion
#include <iostream>
using namespace std;
//declaring the function
int hcf(int n1, int n2);
// initialization
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}
//using main function
int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1;
   cin >> n2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);

   return 0;
}