#include <iostream>
#include <string>
using namespace std;

double EastCoastDivision(double sales)
{
    const double percent = 0.58f;

    return sales * percent;
}

int main()
{
    int a = 50, b = 100;
    int ____ = a + b;

    cout << ____ << endl;

    double earnings = EastCoastDivision(8.6E6);

    cout << earnings << endl;
    return 0;
}