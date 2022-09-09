#include <iostream>
using namespace std;

int  main()
{
    int  n;

    cout << "Enter a Number = ";
    cin >> n;

    int  f0 = 0;
    int  f1 = 1;
    int  i  = 1;

    while (i <= n)
    {
        auto  fn = f1 + f0;

        if (i == fn)
        {
            cout << "+";
            f0 = f1;
            f1 = fn;
            i += 1;
        }
        else
        {
            cout << "-";

            i += 1;
        }
    }

    cout << endl;

    return 0;
}
