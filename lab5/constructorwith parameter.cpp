#include<iostream>
#include<string.h>
using namespace std;
class car
{
    public:
    string brand,model;
    int year;
    car(string x,string y,int z);
};
 car::car(string x,string y,int z)
 {
     brand=x;
     model=y;
     year=z;
 }
int main()
{
     car Obj1("BMW", "X5", 1999);
       car Objw("BMW", "X5", 1999);

     cout<<Obj1.brand<<" "<<Obj1.model<<" "<<Obj1.year;
    return 0;
}
