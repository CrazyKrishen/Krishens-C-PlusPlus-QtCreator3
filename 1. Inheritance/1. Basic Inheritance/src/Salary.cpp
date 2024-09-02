#include "Salary.h"
using namespace std;

Salary::Salary(double m)
{
    money = m;
}

double Salary::getSalary()
{
    return money;
}

double Salary::setSalary(double setM)
{
    money = setM;
}

