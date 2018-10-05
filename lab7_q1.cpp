//Write a C++ program to find power of any number using recursion.
#include <iostream>
using namespace std;
// declaring the function Pow
int Pow(int, int);
// initialization
int Pow(int base, int power)
{
    if (power != 0)
    {
        return (base*Pow(base, power-1));
    }
    else
    {
        return 1;
    }
}
// using main function
int main()
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}