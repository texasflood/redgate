#pragma once
#include <iostream>

class doublyLinkedItem
{
    private:
        doublyLinkedItem* next;
        doublyLinkedItem* prev;
        int value;
    public:
        void setNext(doublyLinkedItem* newNext);
        void setPrev(doublyLinkedItem* newPrev);
        void setVal(int newVal);
        doublyLinkedItem* getNext(void);
        doublyLinkedItem* getPrev(void);
        int getVal(void);

        //Constructor
        doublyLinkedItem(doublyLinkedItem* nextItem, doublyLinkedItem* prevItem, int passedValue);
        void print (void);
};
