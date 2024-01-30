#include<iostream>
using namespace std;

int main()
{
    string FirstName, LastName, result;

    cout << "Enter FirstName: ";
    cin>>FirstName;

    cout << "Enter LastName: ";
    cin>>LastName;

    result = FirstName +" "+ LastName ;

    cout << "FullName = "<< result;

    return 0;
}

