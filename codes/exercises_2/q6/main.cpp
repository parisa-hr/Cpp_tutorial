#include <iostream>
using namespace std;

int  main()
{
    int  n;

    cin >> n;

    if ((n <= 10) && (n >= 1))
    {
        for (int line = 1; line <= n; line++)
        {
            int  C = 1;

            for (int i = 1; i <= line; i++)
            {
                cout << C << " ";

                C = C * (line - i) / i;
            }

            cout << " \n";
        }
    }

    return 0;
}
