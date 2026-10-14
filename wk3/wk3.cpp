#include <iostream>
// for string operations stuff
#include <iomanip>
#include <random>
#include <numbers>
#include <fstream>
using namespace std;

random_device myEngine;

uniform_int_distribution<int> randInt(0, 100);
uniform_real_distribution<float> randyReal(12.0, 333.0);

void thing()
{

    ifstream inputFile;
    inputFile.open("Customers.txt");

    ifstream other("customers.txt");

    if (other)
    {
        string data;
        while (other >> data)
        {
            cout << data << endl;
        }
    }

    int num = randInt(myEngine);

    float r = randyReal(myEngine);

    float smth = pow(3, 3);

    string fullvaluepak;

    string yes = R"(moar\n \ \ stuff)";

    cout << num << endl;
    cout << num << endl;
    cout << r << endl;
    cout << r << endl;
    cout << randInt(myEngine) << endl;
    cout << randyReal(myEngine) << endl;

    cout << setprecision(2) << fixed;
    cout << "<-" << static_cast<int>(3.14159) << setw(32) << 3.532183 << R"(moar\n \ \ stuff)" << endl;

    // cin >> fullvaluepak;

    // use this for string inputs for full lines, cin is the stream, now I could use whatever stream I want.

    getline(cin, fullvaluepak);

    float pi = numbers::pi;
}

void fmtCollection(float (&c)[5])
{
    cout << setw(3) << "Input delays: <";
    int len = size(c);
    for (int i = 0; i < len; i++)
    {
        cout << c[i];
        if (i < len - 1)
        {
            cout << " ";
        }
    }
    cout << ">" << endl;
}

float avg(float (&nums)[5])
{
    float avg = 0;
    for (int num : nums)
    {
        avg += num;
    }
    return avg / size(nums);
}

int main()
{

    // float nums[5];

    // cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4];
    // fmtCollection(nums);
    // cout << "The average delay was " << avg(nums) << endl;

    thing();

    return 0;
}