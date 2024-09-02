#include <iostream>
using namespace std;


class Base
{
public:
    void display(int i)
    {
        cout <<"Base Class"<<endl;
    }
};


class Derived: public Base
{
public:
    void display(char c)
    {
        cout <<"Derived Class"<<endl;
    }
};



int main()
{
    Derived a;

    a.display(1);  //here it will dislay derived class
    a.display('a');   //here it will dislay derived class
    //this is becuase tey are both from the devrived object

    //even though its derived object, i can also make a derived object deisplay the Base fucntion. Heres how:
    a.Base::display(1);     //make sure you use Base::to evoke the base class function
    a.Base::display('a');



    return 0;
}
