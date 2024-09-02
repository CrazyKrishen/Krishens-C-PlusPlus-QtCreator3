#include "Manager.h"
using namespace std;



Manager::Manager(double managerSal, double Allow): Salary(managerSal), allowance(Allow)
{

}
double Manager::getAllow()
{
    return allowance;
}
double Manager::calcSal()  //Inhertited Fucntion from Salary
{
    double total = money +allowance;

    return total;
}

