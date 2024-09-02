#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Salary.h"
using namespace std;


class Manager: public Salary
{
    private:
        double carAllowance;
    public:
        Manager(double mSal, double cAllow); //construcer
        double getcarAllowance(); //This is for allowance (get)
        double setcarAllowance();  //This is for allowance (set)
        double pay() //same fucntion in the Salary function

        void display();


};

#endif // MANAGER_H
