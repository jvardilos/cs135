#ifndef ROOM
#define ROOM
#include "player.h"
#include "item.h"

class Room
{
private:
    int dimensions = 0;
    Player *currentPlayer = NULL;
    std::vector<Item> inventory;

public:
    Room(int d);
    void updatePlayer(Player *);
    int getDimensions();
    bool containsPlayer();
    void printRoom();
};

#endif