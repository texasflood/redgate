#include "../include/doublyLinkedItem.hpp"

doublyLinkedItem::doublyLinkedItem(*doublyLinkedItem nextItem, *doublyLinkedItem prevItem, int passedValue);
{
    next = nextItem;
    prev = prevItem;
    value = passedValue;
}

void setNext(*doublyLinkedItem newNext)
{
    next = newNext;
}

void setPrev(*doublyLinkedItem newPrev)
{
    prev = newPrev;
}

void setVal(int newVal)
{
    value = newVal;
}

*doublyLinkedItem getNext(void)
{
    return next;
}

*doublyLinkedItem getPrev(void)
{
    return prev;
}

int getVal(void)
{
    return value;
}
