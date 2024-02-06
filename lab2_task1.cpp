#include <iostream>
using namespace std;

int main()
 {
    string input;


    cout << "Enter a value: ";
    cin >> input;


    bool isNumeric = true;
    for (char ch : input)
        {
        if (ch < '0' || ch > '9')
            {
            isNumeric = false;

        }
        }

    if (isNumeric)
        {
        cout << "Numeric constant" << endl;
        }
        else
        {
        cout << "Not numeric." <<endl;
        }

    return 0;
}
