#include "Salary.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main()
{

    Manager ITManager(60000, 40000);

    cout <<"Managers full salary is(Basic + allow): "<<ITManager.calcSal();

    return 0;
}
