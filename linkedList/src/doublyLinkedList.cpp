#include "../include/doublyLinkedList.hpp"

doublyLinkedList::doublyLinkedList(doublyLinkedItem* headArg)
{
    isCircular = true;
    headRef = headArg;
}

doublyLinkedList::doublyLinkedList(doublyLinkedItem* headArg, doublyLinkedItem* tailArg) 
{
    isCircular = false;
    headRef = headArg;
    tailRef = tailArg;
}

void doublyLinkedList::print (void)
{
    (*headRef).print();
    doublyLinkedItem* nextItemRef = (*headRef).getNext();
    if (isCircular)
    {
        while (nextItemRef != headRef)
        {
            (*nextItemRef).print();
            nextItemRef = (*nextItemRef).getNext();        }
    }
    else
    {
        while (nextItemRef != tailRef)
        {
            (*nextItemRef).print();
            nextItemRef = (*nextItemRef).getNext();
        }
        (*tailRef).print();
    }
}

