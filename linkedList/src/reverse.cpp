#include <iostream>
#include "reverse.hpp"

void reverse(doublyLinkedList theList);

int main()
{
    doublyLinkedList theList = doublyLinkedList();

    theList.reverse();
    theList.print();

    return 0;
}

