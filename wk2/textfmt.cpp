#include <iostream>
// #include <math.h>
using namespace std;
// using namespace std::__math;

int main()
{
    string literal = R"(literal "string" \n)";
    unsigned long long bigNumber = 30LL;
    int binary = 0b00100011;
    int hex = 0xaf;
    unsigned int maximum = numeric_limits<unsigned int>::max();

    char letter = 'a';
    const unsigned short c = 256;
    for (unsigned short i = 0; i < c; i++)
    {
        // char thing = (char)i;
        cout << letter << endl;
    }

    return 0;
}