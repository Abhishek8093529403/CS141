//Write a piece of code which prints the characters in a cstring in a reverse order.
#include <iostream>
using namespace std;

int main()
{
   char c[10] ="abcde";
   char* cptr;
   cptr=c;
   //using the loops
   for(int i=10;i>=0;i--)
   {
       cout<<*(cptr+i);
   }
   return 0;
}
