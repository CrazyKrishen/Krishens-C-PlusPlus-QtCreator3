#ifndef MANAGER_H
#define MANAGER_H
#include "Salary.h"
#include <iostream>
using namespace std;


class Manager: public Salary
{
    public:
        Manager(double managerSal, double Allow);
        double getAllow();
        double calcSal();  //Inhertited Fucntion from Salary

    private:
        double allowance;
};

#endif // MANAGER_H
