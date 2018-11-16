#include <iostream>
using namespace std;
//defining a class 
class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
      void Create(char*,int,int,int);
   };
//member function create
   void ZooAnimal::Create(char* x,int a,int b,int c)
   {
       name=x;
       cageNumber=a;
       weightDate=b;
       weight=c;
   }
//member function destroy
   void ZooAnimal::Destroy ()
   {	
    delete [] name;
   }
//member function reptname()
   char* ZooAnimal::reptName ()
   {
    return name;
   }
//member function daysSinceLastWeighed
    int ZooAnimal::daysSinceLastWeighed (int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);
   }

int main()
{
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;
    cout << "The number of days since last weighed "<<bozo.daysSinceLastWeighed(256)<<endl;
    //bozo.Destroy ();
    return 0;
}
