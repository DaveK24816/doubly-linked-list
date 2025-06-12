#include "DoublyLinkedList.h"


int main()
{
	DoublyLinkedList list;
	list.addHead(3);
	list.addTail(5);
	list.addHead(1);
	cout << list << endl;
	list.removeHead();
	cout << list.toString(" -> ") << endl;
	return 0;
}


