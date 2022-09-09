#include <iostream>
#include <math.h>

using namespace std;

double  area(double r)
{
    double  s = M_PI * r * r;

    return s;
}

double  perimeter(double r)
{
    double  p = 2 * M_PI * r;

    return p;
}

int  main()
{
    double  r;

    cout << "Enter your radius = ";

    cin >> r;

    cout << " your area is = " << area(r) << endl;

    cout << "your perimeter is = " << perimeter(r) << endl;

    return 0;
}
