#include <iostream>

using namespace std;

int  main()
{
// " * "
// "***"
// " * "

    int  n = 0, s = 1;

    cout << "n = ";
    cin >> n;

    while (n >= 0)
    {
        for (int var = 0; var < n; var++)
        {
            cout << " ";
        }

        for (int i = 0; i < s; i++)
        {
            cout << "*";
        }

        cout << endl;

        n = n - 1;                // n-- ; n -=1;

        s += 2;
    }

    n += 1;
    s -= 2;

    while (s > 1)
    {
        n += 1;
        s -= 2;

        for (int var = 0; var < n; var++)
        {
            cout << " ";
        }

        for (int i = 0; i < s; i++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
