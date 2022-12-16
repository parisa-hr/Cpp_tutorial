#include <iostream>
using namespace std;

int  main()
{
    float  grade = 0.0, sum = 0.0, M;
    int    counter = 0;

    cout << "Exit = 0" << endl;

    while (true)
    {
        cout << "grade : ";
        cin >> grade;

        if (grade == 0.0)
        {
            break;
        }

        sum += grade;
        counter++;
    }

    M = sum / counter;
    cout << "Avg = " << M << endl;

    if ((M > 17) && (M <= 20))
    {
        cout << "A" << endl;
    }
    else if ((M > 15) && (M <= 17))
    {
        cout << "B" << endl;
    }
    else if ((M > 12) && (M <= 15))
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "less than 12" << endl;
    }

// while (grade != 0)
// {
// if ((grade > 17) && (grade <= 20))
// {
// cout << "A" << endl;
// }
// else if ((grade > 15) && (grade <= 17))
// {
// cout << "B" << endl;
// }
// else if ((grade > 12) && (grade <= 15))
// {
// cout << "C" << endl;
// }
// else
// {
// cout << "less than 12" << endl;
// }

// cout << "grade : ";
// cin >> grade;
// sum += grade;

// counter++;
// }

    return 0;
}

