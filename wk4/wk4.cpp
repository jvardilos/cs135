#include <iostream>
#include <fstream>

void op(int &area)
{
    area += 2;
    area *= 2;
}

int main()
{
    int area = 0;

    std::ofstream f("file.txt");

    op(area);

    f << area;

    return 0;
}