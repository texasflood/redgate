#pragma once
#include "../include/doublyLinkedItem.hpp"
#include <vector>

class doublyLinkedList
{
    private:
        doublyLinkedItem* headRef;
        doublyLinkedItem* tailRef;
        std::vector<doublyLinkedItem> items;
    public:
        doublyLinkedList(int value);
        void makeCircular (void);
        void unmakeCircular (doublyLinkedItem* splitPoint);
        void append (int value);
        void print (void);
        void reverse (void);
        bool isCircular;
};
