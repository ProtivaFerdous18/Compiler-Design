#include <iostream>
using namespace std;

int main()
{
    string input;


    cout << "Enter string: ";
    cin>>input;


    if (input.find("//") == 0)
    {
        cout << "Single line comment" << endl;
    }

    else if (input.find("/*") == 0 && input.find("*/"))
    {
        cout << "Multi line comment" << endl;
    }

    else
    {
        cout << "Not a comment" << endl;
    }

    return 0;

}
