#include <iostream>

using namespace std;

int  main()
{
// for
// while
// do ... while

    int  selector, a = 10, b = 20;

    while (1)
    {
        cout << "1.Hello ra chap kon" << endl;
        cout << "2. a + b " << endl;
        cout << "3. Exit " << endl;
        cout << "Az menu zir 1 gozineh ra Entekhab konid = ";

        cin >> selector;

        if (selector == 1)
        {
            cout << "Hello" << endl;
            cout << "----------------------------------\n";
        }
        else if (selector == 2)
        {
            cout << "a+b" << a + b << endl;
            cout << "----------------------------------\n";
        }
        else if (selector == 3)
        {
// return 0;
// break;
            exit(0);
        }
        else
        {
            cout << "Beyne 1 ta 3 bayad vared konid ." << endl;
            cout << "----------------------------------" << endl;
        }
    }

    return 0;
}
