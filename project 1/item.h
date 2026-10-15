#ifndef ITEM
#define ITEM

// polymorphic Item type, one to many relationship of use in inventory.
struct Item
{
    virtual ~Item() = default;
};

struct Brazier : public Item
{
    bool isLit = false;
};

struct Torch : public Item
{
    void lightBrazier(Brazier *b)
    {
        b->isLit = true;
    }
};

#endif