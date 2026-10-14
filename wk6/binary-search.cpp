#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include "population.h"
using namespace std;

bool contains(vector<int> v, int num)
{

    int first = 0;
    int last = v.size();

    while (first <= last)
    {
        int mid = (last + first) / 2;
        if (v[mid] == num)
        {
            return true;
        }
        else if (v[mid] > num)
        {
            last = mid - 1;
            cout << "last " << last << endl;
        }
        else if (v[mid] < num)
        {
            first = mid + 1;
            cout << "first " << first << endl;
        }
    }

    return false;
}

int main()
{

    for (int i = 0; i < 100; i++)
    {
        vector<int> v;
        int find = populateV(v);
        if (contains(v, find))
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}