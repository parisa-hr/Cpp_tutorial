#include <iostream>

using namespace std;

int  main()
{
    const int  n = 5;
    int        Numbers[n];

    cout << "Enter 10 Numbers " << endl;

    for (int i(0); i < n; i++)
    {
        cout << "Enter Number " << i << " = ";
        cin >> Numbers[i];
    }

    cout << "=====================" << endl;

    cout << "Negative numbers = ";

    for (auto i : Numbers)
    {
        if (i < 0)
        {
            cout << i << " , ";
        }
    }

    cout << "\n=====================" << endl;

    cout << "Positive numbers = ";

    for (auto i : Numbers)
    {
        if (i >= 0)
        {
            cout << i << " , ";
        }
    }

    return 0;
}

