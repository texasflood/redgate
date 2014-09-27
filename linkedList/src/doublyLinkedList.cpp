#include "../include/doublyLinkedList.hpp"

doublyLinkedList::doublyLinkedList(*doublyLinkedItem headArg)
{
    isCircular = true;
    head = &headArg;
}

doublyLinkedList::doublyLinkedList(*doublyLinkedItem headArg, *doublyLinkedItem tailArg)
{
    isCircular = false;
    head = &headArg;
    tail = &tailArg;
}
