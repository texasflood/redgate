#include "../include/doublyLinkedList.hpp"

doublyLinkedList::doublyLinkedList (int value)
{
    items = std::vector<doublyLinkedItem>();
    isCircular = false;
    doublyLinkedItem initialHead = doublyLinkedItem (NULL, NULL, value);
    doublyLinkedItem initialHead2 = doublyLinkedItem (NULL, &initialHead, value + 1);
    initialHead.setNext (&initialHead2);
    //items.push_back(initialHead);
    headRef = &initialHead;
    tailRef = &initialHead2;
}

void doublyLinkedList::makeCircular (void)
{
    if (!isCircular)
    {
        (*tailRef).setNext (headRef);
        tailRef = NULL;
        isCircular = true;
    }
}

void doublyLinkedList::unmakeCircular (doublyLinkedItem* splitPoint)
{
    if (isCircular)
    {
        headRef = ((*splitPoint).getNext());
        tailRef = splitPoint;
        (*headRef).setPrev (NULL);
        (*tailRef).setNext (NULL);
        isCircular = false;
    }
}

void doublyLinkedList::append (int value)
{
}


void doublyLinkedList::print (void)
{
    (*headRef).print();
    if (!(*headRef).getNext())
    {
        return;
    }
    doublyLinkedItem* nextItemRef = (*headRef).getNext();
    if (isCircular)
    {
        while (nextItemRef != headRef)
        {
            (*nextItemRef).print();
            nextItemRef = (*nextItemRef).getNext();      
        }
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

void doublyLinkedList::reverse (void)
{
    if (isCircular)
    {
        return;
    }

    for (doublyLinkedItem* i = headRef; i != tailRef; i = (*i).getNext())
    {
       doublyLinkedItem* tempRef = (*i).getNext();
       (*i).setNext ((*i).getPrev());
       (*i).setPrev (tempRef);
    }

    doublyLinkedItem* tempRef = headRef;
    headRef = tailRef;
    tailRef = tempRef;
}
