#include <iostream>
#include <cmath>
// #include <math.h>

using namespace std;

// Max
int  main()
{
// double  a, b;

// cout << "Enter 3 Number = ";
// cin >> a >> b;
// cout << "Max = " << fmax(a, b) << endl;
// cout << "Min = " << fmin(a, b) << endl;

    while (1)
    {
        double  a, b, c;

        cout << "Enter 3 Number = ";
        cin >> a >> b >> c;
// Max
        {
            if ((a > b) && (a > c))
            {
                cout << "Max = " << a << endl;
            }
            else if ((b > a) && (b > c))
            {
                cout << "Max = " << b << endl;
            }
            else if ((c > b) && (c > a))
            {
                cout << "Max = " << c << endl;
            }
            else
            {
                cout << "Max = " << a << endl;
            }
        }
// Min

        if ((a < b) && (a < c))
        {
            cout << "Min = " << a << endl;
        }
        else if ((b < a) && (b < c))
        {
            cout << "Min = " << b << endl;
        }
        else if ((c < b) && (c < a))
        {
            cout << "Min = " << c << endl;
        }
        else
        {
            cout << "Min = " << a << endl;
        }
    }

    return 0;
}
