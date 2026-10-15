#include "player.h"
#include <iostream>

void Player::updateCoords(int x, int y)
{
    coords[0] = x;
    coords[1] = y;

    for (int dim : coords)
    {
        std::cout << "coords " << dim << std::endl;
    }
}

std::vector<int> Player::getCoords()
{
    for (int dim : coords)
    {
        std::cout << "afters " << dim << std::endl;
    }
    return coords;
}

void Player::useItem(Item item)
{
    // This polymorphic pattern is reminiscent of Go's selling point,
    // this detects the underlying type.
    if (Torch *t = dynamic_cast<Torch *>(&item))
    {
        Torch torch = *(dynamic_cast<Torch *>(&item));
        Brazier b;

        torch.lightBrazier(&b);
    }
    else
    {
        std::cout << "unknown type of Item" << std::endl;
    }
}