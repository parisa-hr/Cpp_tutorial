#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name : ";

    string name;

    cin >> name;

    string greeting = "Hello, "+name +"!";

    cout <<  greeting<<endl;

    string spaces(greeting.size(),' ');
    string second = "* "+spaces+" *";
    string first(second.size(),'*');
    cout<<endl;
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<"* "+greeting+" *"<<endl;
    cout<<second<<endl;
    cout<<first<<endl;


    return 0;
}
