#include <iostream>
#include "room.h"

// Room Functions
Room::Room(int d)
{
    dimensions = d;
}

int Room::getDimensions()
{
    return dimensions;
}

bool Room::containsPlayer()
{
    return currentPlayer;
}

void Room::updatePlayer(Player p)
{
    currentPlayer = &p;
}

void Room::printRoom()
{
    for (int i = 1; i <= dimensions; i++)
    {
        std::cout << "=";
    }

    std::cout << std::endl;

    for (int i = 2; i <= (dimensions / 2); i++)
    {
        std::cout << "|";

        for (int i = 2; i < dimensions; i++)
        {
            if (currentPlayer)
            {
                // unpack coords
                std::vector<int> coords = currentPlayer->getCoords();
                if (coords[0] == i)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
        }

        std::cout << "|" << std::endl;
    }

    // for (int i = 2; i <= (dimensions / 2); i++)
    // {
    //     std::cout << "|";

    //     for (int i = 2; i < dimensions; i++)
    //     {
    //         std::cout << " ";
    //     }

    //     std::cout << "|" << std::endl;
    // }

    for (int i = 1; i <= dimensions; i++)
    {
        std::cout << "=";
    }

    std::cout << std::endl;
}