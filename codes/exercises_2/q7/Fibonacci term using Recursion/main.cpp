#include <iostream>
using namespace std;

int  fibonacci(int);

int  main()
{
    // declare variables
    int  n;

    // take input
    cout << "Enter term: ";
    cin >> n;

    // display result
    cout << "Fibonacci term= " << fibonacci(n) << endl;

    return 0;
}

// recursive function to find fibonacci term
int  fibonacci(int n)
{
    if (n <= 1)
    {
        return n;          // base case
    }
    else // general case
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
