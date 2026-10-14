#ifndef PLAYER
#define PLAYER
#include <vector>
#include "item.h"

class Player
{
private:
    std::vector<Item> inventory;
    std::vector<int> coords = {0, 0};
    void useTorch(Torch);

public:
    void takeItem(Item);
    void useItem(Item);
    void updateCoords(int x, int y);
    std::vector<int> getCoords();
};

#endif