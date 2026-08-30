#include <iostream>
// #include <math.h>
using namespace std;
// using namespace std::__math;

int main()
{
    string firstName, lastName;
    string literal = R"(literal "string" \n)";

    unsigned int regulateMeDaddy;

    cout << pow(2, sizeof(regulateMeDaddy)) << endl;
    cout << sizeof(regulateMeDaddy) << endl;

    int finalSavings = 6105;

    int remainder = 1000 / finalSavings;

    cout << remainder << endl;
    unsigned long long bigNumber = 30LL;
    int binary = 0b00100011;
    int hex = 0xaf;
    unsigned int maximum = numeric_limits<unsigned int>::max();

    double st = 2.234;

    char letter = 'a';
    const unsigned short c = 256;
    for (unsigned short i = 0; i < c; i++)
    {
        // char thing = (char)i;
        cout << letter << endl;
    }

    float distance;
    double mass;

    distance = 1.495979E11;
    mass = 1.989E30;
    cout << "The Sun is " << distance << " meters away.\n";
    cout << "The Sun\'s mass is " << mass << " kilograms.\n";

    return 0;
}