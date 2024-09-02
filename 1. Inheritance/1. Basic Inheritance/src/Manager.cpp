#include "Manager.h"


Manager::Manager(double mSal, double cAllow): Salary(mSal), cAllow(carAllowance) //setting constructor to constructor of Salary and also allowance
{

}

void Manager::display()
{
    cout <<"Manager Salary is: "<<money<<endl;
}


double getcarAllowance() //This is for allowance (get)
{
    return carAllowance;
}

double setcarAllowance(double CA);  //This is for allowance (set)
{
    carAllowance = CA;
}

double Manager::pay()
{
    double total = money + allowance;

    return total;
}


void Manager::display()
{
    cout <<"Managers total Salary (Basic + Allowance): "<<money<<end;
}
