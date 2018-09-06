//square star pattern
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<< "enter the number of stars in each side of the square = "<<endl;
     cin>> n;
// print stars
//assign condition
     for(int i = 0; i< n; i++)
     {
         for (int j= 0; j < n;j++)
         {
          cout<< "*";
         }
       cout<<endl;
     }
     return 0;
}

