#include <iostream>
#include <math.h>
using namespace std;

int  main()
{
// int  x, n = 0;

// cout << "Enter a num = ";
// cin >> x;

// for (int i(1); i <= x; i++)
// {
// if (x % i == 0)
// {
// cout << i << " ,";
// n++;
// }
// }

// cout << endl;

    // BMM
    int  a, b, temp, kmm;

    cout << "Enter a num1 =";
    cin >> a;
    cout << "Enter a num2 =";
    cin >> b;

    int  n1 = a;
    int  n2 = b;

    while (true)
    {
        if (b == 0)
        {
            break;
        }

        temp = a % b;

        a = b;
        b = temp;
    }

    cout << "B.M.M = " << a << endl;

    // KMM
    kmm = (n1 * n2) / a;
    cout << "K.M.M = " << kmm << endl;

    return 0;
}

