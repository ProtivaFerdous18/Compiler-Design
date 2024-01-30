#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double num[n], sum=0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}

