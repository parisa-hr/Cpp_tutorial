#include <iostream>

using namespace std;

int  main()
{
    int  s[2][2];

    for (int i(0); i < 2; i++)
    {
        for (int j(0); j < 2; j++)
        {
            cout << "s[" << i << "][" << j << "] = ";
            cin >> s[i][j];
        }
    }

    cout << "=========================\n";

    for (int i(0); i < 2; i++)
    {
        for (int j(0); j < 2; j++)
        {
            cout << s[i][j] << ",";
        }

        cout << endl;
    }

    return 0;
}

