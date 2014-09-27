#pragma once
#include "../include/doublyLinkedItem.hpp"

class doublyLinkedList
{
    private:
        doublyLinkedItem head;
        doublyLinkedItem tail;
    public:
        doublyLinkedList(*doublyLinkedItem); //Circular
        doublyLinkedList(*doublyLinkedItem, *doublyLinkedItem); //Normal
        bool isCircular;
};
