#include "../include/doublyLinkedItem.hpp"

doublyLinkedItem::doublyLinkedItem(doublyLinkedItem* nextItem, doublyLinkedItem* prevItem, int passedValue)
{
    next = nextItem;
    prev = prevItem;
    value = passedValue;
}

void doublyLinkedItem::setNext(doublyLinkedItem* newNext)
{
    next = newNext;
}

void doublyLinkedItem::setPrev(doublyLinkedItem* newPrev)
{
    prev = newPrev;
}

void doublyLinkedItem::setVal(int newVal)
{
    value = newVal;
}

doublyLinkedItem* doublyLinkedItem::getNext(void)
{
    return next;
}

doublyLinkedItem* doublyLinkedItem::getPrev(void)
{
    return prev;
}

int doublyLinkedItem::getVal(void)
{
    return value;
}

void doublyLinkedItem::print (void)
{
    std::cout << value << std::endl;
}
