#include <iostream>

using namespace std;

int  main()
{
    int  m1[5][5], m2[5][5], m3[5][5];

// tarif M1
    for (int i(0); i < 5; i++)
    {
        for (int j(0); j < 5; j++)
        {
            cout << "m1[" << i << "][" << j << "] = ";
            cin >> m1[i][j];
        }
    }

    // tarif M2

    for (int i(0); i < 5; i++)
    {
        for (int j(0); j < 5; j++)
        {
            cout << "m2[" << i << "][" << j << "] = ";
            cin >> m2[i][j];
        }
    }

    // M3 = M1 + M2

    for (int i(0); i < 5; i++)
    {
        for (int j(0); j < 5; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    cout << "=========================\n";

// cout M3
    for (int i(0); i < 5; i++)
    {
        for (int j(0); j < 5; j++)
        {
            cout << m3[i][j] << ",";
        }

        cout << endl;
    }

    return 0;
}

