//triangle star pattern
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<< "enter the number of stars in base = "<<endl;
     cin>> n;
 // print stars
//assign condition
     for(int i = 0; i< n; i++)
     {
         for (int j= 0; j <=i;j++)
         {
          cout<< "*";
         }
        
       cout<<endl;
     }
     return 0;
}

