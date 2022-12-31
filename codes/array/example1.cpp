#include <iostream>

using namespace std;

int  main()
{
    const int  n = 5;
    double     Sum = 0.0, Avg = 0.0;
    int        Numbers[n];

    cout << "Enter 10 Numbers " << endl;

    for (int i(0); i < n; i++)
    {
        cout << "Enter Number " << i << " = ";
        cin >> Numbers[i];
    }

    for (auto i : Numbers)
    {
        Sum += i;
    }

    Avg = Sum / n;

    cout << "Avg = " << Avg << endl;

    return 0;
}

