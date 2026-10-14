#include <random>
#include <vector>
#include "population.h"

int populateV(std::vector<int> &v)
{
    std::random_device seed;
    std::uniform_int_distribution<int> r(0, 12344);

    for (int i = 0; i < r(seed); i++)
    {
        v.push_back(r(seed));
    }

    // sort(v.begin(), v.end());

    return r(seed);
}