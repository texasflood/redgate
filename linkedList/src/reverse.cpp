#include "../include/doublyLinkedList.hpp"

void reverse(doublyLinkedList theList);

int main()
{
    doublyLinkedItem one = doublyLinkedItem (NULL, NULL, 99);
    doublyLinkedItem two = doublyLinkedItem (NULL, &one, 2);
    doublyLinkedItem three = doublyLinkedItem (&one, &two, 3);
    one.setNext (&two);
    two.setNext (&three);

    doublyLinkedList theList = doublyLinkedList(&one);

//    theList.reverse();
    theList.print();

    return 0;
}

