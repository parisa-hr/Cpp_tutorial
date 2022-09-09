#include <iostream>

using namespace std;

int  main()
{
    int  A[] = { 6, 5, 2, 9, 11, 15, 17 };
    int  B[] = { 20, 3, 7, 13, 2, 8, 10, 9 };

    for (int i(0); i < size(A); i++)
    {
        for (int j = i + 1; j < size(B); j++)
        {
            if (A[i] == B[j])
            {
                cout << "Moshtarak = " << A[i] << endl;
            }
        }
    }

    return 0;
}
