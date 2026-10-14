#include <iostream>
#include <vector>
#include "population.h"
using namespace std;

int main()
{
    vector<int> v;
    populateV(v);

    for (int i = 0; i < (v.size() - 1); i++)
    {
        int mini = i;
        int minv = v[i];
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < minv)
            {
                minv = v[j];
                mini = j;
            }
        }
        swap(v[mini], v[i]);
    }

    for (int item : v)
    {
        cout << item << endl;
    }

    return 0;
}