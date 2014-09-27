#pragma once
#include "../include/doublyLinkedItem.hpp"

class doublyLinkedList
{
    private:
        doublyLinkedItem* headRef;
        doublyLinkedItem* tailRef;
    public:
        doublyLinkedList(doublyLinkedItem* headArg); //Circular
        doublyLinkedList(doublyLinkedItem* headArg, doublyLinkedItem* tailArg);
        void print (void);
        bool isCircular;
};
