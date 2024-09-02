#include <iostream>
using namespace std;


class Base
{
public:
     virtual void display()
    {
        cout <<"Base class"<<endl;
    }

};


class Derived: public Base
{
public:
     virtual void display()
    {
        cout <<"Derived class"<<endl;
    }

};


int main()
{
    Base *a;  //declared a pointer object
    Derived b;  //declared a normal object

    a = &b;//the address of b is given to a

    a ->display();




    return 0;
}


//https://www.youtube.com/watch?v=wK93q-JQUvw   better explanation is given on that channel
