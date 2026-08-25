#include <iostream>
using namespace std;

int main()
{

    // Literal formatting of string, helpful!
    string str = R"(this \\ sdf \\\\\"is literally it, )";

    string terminate = "terminate this line\n";

    cout << str + terminate;

    cout << "(Hello\nWorld)\n";

    int num;

    // num = 5;

    cout << num << endl;

    return 0;
}