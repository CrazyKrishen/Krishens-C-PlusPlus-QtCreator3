#include <QDebug>
using namespace std;


class Salary
{
protected:
    double wages;

public:
    Salary(double sal)
    {
        wages = sal;
    }


    double getSalary()
    {
        return wages;
    }
};


class Manager: Salary
{
protected:
    double carAllowance;

public:

    Manager(double salaryMon, double CA): Salary(salaryMon), carAllowance(CA)
    {

    }

    void setCA(double money)
    {
        carAllowance = money;
    }


    double getCA()
    {
        return carAllowance;
    }

    double getSalary()
    {
        return (wages + carAllowance);
    }


};



int main()
{


    Manager m1(80000, 20000);

    qDebug() <<m1.getSalary();


    qDebug() <<m1.getSalary()-m1.getCA();


    return 0;
}
