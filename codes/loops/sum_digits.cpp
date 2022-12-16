#include <iostream>
#include <math.h>
using namespace std;

int  main()
{
    int  x, sum = 0;

    cin >> x;

    for (int i(0); x > 0; i++)
    {
        sum += x % 10;
        x   /= 10;                 // x = x / 10
    }

    cout << "Sum = " << sum << endl;

    return 0;
}

