#include <iostream>

using namespace std;

int  main()
{
    // Fard
    for (int i { 101 }; i <= 999; i += 2)
    {
        cout << i << " , ";
    }

// Zoj
    for (int i { 100 }; i <= 999; i += 2)
    {
        cout << i << " , ";
    }

// ravesh2
    for (int i { 100 }; i <= 999; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Zoj = " << i << endl;
        }
        else
        {
            cout << "Fard = " << i << endl;
        }
    }

    return 0;
}

