all: reverse

reverse: doublyLinkedItem.o doublyLinkedList.o reverse.o
	g++ doublyLinkedItem.o doublyLinkedList.o reverse.o -o reverse

doublyLinkedItem.o: ../src/doublyLinkedItem.cpp
	g++ -c ../src/doublyLinkedItem.cpp

doublyLinkedList.o: ../src/doublyLinkedList.cpp
	g++ -c ../src/doublyLinkedList.cpp

reverse.o: ../src/reverse.cpp
	g++ -c ../src/reverse.cpp

clean:
	rm *.o
