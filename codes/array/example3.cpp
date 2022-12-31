#include <iostream>

using namespace std;

int  main()
{
    int  A[4][2] = {
        {   12, 56 },
        { 1212, 33 },
        {  145, 89 },
        { 1888,  0 }
    };

// cout << "A[1][0] = " << A[1][0] << endl;

    for (int i(0); i < 4; i++)
    {
        for (int j(0); j < 2; j++)
        {
            cout << A[i][j] << " ,";
        }

        cout << endl;
    }

    return 0;
}

