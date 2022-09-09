#include <iostream>
using namespace std;

double  summation(double &sum)
{
    double  b;

    for (int a = 0; a < 10; ++a)
    {
        cin >> b;
        sum += b;
    }

    return sum;
}

int  main()
{
    double  sum;

    cout << "Enter any 10 num in array: ";

    sum = summation(sum);
    cout << "Sum Of Your Numbers = " << sum << endl;

    return 0;
}
