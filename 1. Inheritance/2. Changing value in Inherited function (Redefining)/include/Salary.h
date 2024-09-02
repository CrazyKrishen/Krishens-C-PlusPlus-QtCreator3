#ifndef SALARY_H
#define SALARY_H
#include <iostream>
using namespace std;

class Salary
{
    public:
        Salary(double m);
        double getSalary();
        double calcSal();


    protected:
        double money;
};

#endif // SALARY_H
