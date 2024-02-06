#include <iostream>
using namespace std;

int main()
{
    string i;

    cout << "Type an Expression: ";
    cin>>i;

    cout << "Operators are: ";
    for (char ch : i)
    {
        if(ch=='+')
        {
            cout<< ch<<" ";
        }
        if(ch=='-')
        {
            cout<< ch<<" ";
        }
        if(ch=='*')
        {
            cout<< ch<<" ";
        }
        if(ch=='/')
        {
            cout<< ch<<" ";
        }
        if(ch=='%')
        {
            cout<< ch<<" ";
        }
        if(ch=='=')
        {
            cout<< ch<<" ";
        }


    }

    cout << endl;

    return 0;
}
