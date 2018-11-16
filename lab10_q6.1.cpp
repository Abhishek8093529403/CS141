#include <iostream>
using namespace std;

enum scale {ounces, kilograms};
//class zooAnimal
class ZooAnimal  
{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function 
    void changeWeight (int pounds);
    void changeWeightDate (int today);
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
};
//Member function create
void ZooAnimal::Create (char* a, int b, int c, int d)
{
    name=a;
    cageNumber=b;
    weightDate=c;
    weight=d;
}
//member function reptWeightDate
inline int ZooAnimal::reptWeightDate ()
{
    return weightDate;
}


int main()
{
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
//to check the day the animal was last weighed
    cout << "The day the animal was last weighed " << bozo.reptWeightDate() << endl;
    return 0;
}
