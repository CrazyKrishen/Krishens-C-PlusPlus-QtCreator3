#ifndef SALARY_H
#define SALARY_H
#include <iostream>
#include <string>
using namespace std;

class Salary
{
    public:
        Salary(double m);
        double getSalary();
        double setSalary(double setM);

    protected:

        double money;

};

#endif // SALARY_H
