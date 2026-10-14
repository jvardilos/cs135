#include <vector>
#include <iostream>
using namespace std;

void vexme()
{
    vector<int> thing;

    int thingy = thing.size();

    cout << thingy << endl;

    thing.insert(thing.end(), 13);

    thingy = thing.size();

    cout << thingy << endl;

    for (int t : thing)
    {
        cout << t << endl;
    }

    thing.clear();

    if (thing.empty())
    {
        cout << "is empty, go home";
    }
}

int main()
{
    vexme();

    return 0;
}