#include <iostream>
using namespace std;

void  swap(int *a, int *b)
{
    int  x = *a;

    *a = *b;
    *b = x;
}

int  main()
{
    int  n1 = 0, n2 = 0;

    cout << "Please enter number 1: ";
    cin >> n1;
    cout << "Please enter number 2: ";
    cin >> n2;
    swap(&n1, &n2);
    cout << "n1=" << n1 << "\nn2=" << n2 << endl;

    return 0;
}
