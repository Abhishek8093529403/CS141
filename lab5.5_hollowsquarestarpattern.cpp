//hollow square star pattern
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<< "enter the number of stars in row = "<<endl;
     cin>> n;
  // print stars
//assign condition
 // print spaces
//assign condition
 // print stars
//assign condition
     for(int i = 0; i< n; i++)
     {  
        if (i==0||i==(n-1))
        {
            for (int i= 0; i < n;i++)
            {
          cout<< "*";
             }
          cout<<endl;
         }
         else 
         {   
             for (int j= 0; j < n;j++)
             {  
                 if (j==0||j==(n-1))
                    {
                cout<< "*";
                     }
       
         
                else {
        
                      cout<< " ";
                     }
              }
        cout<<endl;
         }
     }
     return 0;
}

