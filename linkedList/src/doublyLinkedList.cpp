#include "../include/doublyLinkedList.hpp"

doublyLinkedList::doublyLinkedList (int value)
{
    items = std::vector<doublyLinkedItem>();
    isCircular = false;
    doublyLinkedItem initialHead = doublyLinkedItem (NULL, NULL, value);
    //items.push_back(initialHead);
    headRef = &initialHead;
    tailRef = headRef;
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
    //std::cout << "Top, head is: " << ((*headRef).getVal()) << std::endl;
    doublyLinkedItem* tempTail = tailRef;
    doublyLinkedItem tempAppend = doublyLinkedItem (NULL, tailRef, value);
    //items.push_back(tempAppend);
    tailRef = &tempAppend;
    (*tempTail).setNext (tailRef);
    //std::cout << "Test, head is: " << ((*headRef).getVal()) << std::endl;
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
