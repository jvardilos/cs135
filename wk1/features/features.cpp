#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    cout << "Enter a number in the range 1-10: ";
    cin >> number;

    while (number < 1 || number > 10)
    {
        cout << "Number entered was outside the range 1-10!" << endl;
        cout << "Reenter a number in the range 1-10: ";
        cin >> number;
    }

    return 0;
}