#include "../include/doublyLinkedList.hpp"
#include <vector>

void reverse(doublyLinkedList theList);

int main()
{
    doublyLinkedList theList = doublyLinkedList(300);
    theList.append(43);
    theList.append(22);
    theList.print();

    return 0;
}

