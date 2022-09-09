#include <iostream>
#include <vector>

using namespace std;

void  commonElements(vector<double> vec1, vector<double> vec2)
{
    for (auto i : vec1)
    {
        for (auto j : vec2)
        {
            if (i == j)
            {
                cout << "Moshtarak = " << i << endl;
            }
        }
    }
}

int  main()
{
    vector<double>  vec1;
    vector<double>  vec2;
    double          input;
    int             sizeV1, sizeV2;

    cout << "Enter sizeV1 for first array = ";

    cin >> sizeV1;

    cout << "Enter value for first array = ";

    for (int i = 0; i < sizeV1; i++)
    {
        cin >> input;
        vec1.push_back(input);
    }

    cout << "Enter sizeV2 for first array = ";
    cin >> sizeV2;

    cout << "Enter value for second array = ";

    for (int i = 0; i < sizeV2; i++)
    {
        cin >> input;
        vec2.push_back(input);
    }

    commonElements(vec1, vec2);

    return 0;
}
