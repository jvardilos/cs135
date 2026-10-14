#include "player.h"

void Player::updateCoords(int x, int y)
{
    coords[0] = x;
    coords[1] = y;
}

std::vector<int> Player::getCoords()
{
    return coords;
}