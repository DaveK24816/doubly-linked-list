#include "DoublyLinkedList.h"
#include "Queue.h"


void testDoublyLinkedList()
{
	DoublyLinkedList list;
	list.addHead(3);
	list.addTail(5);
	list.addHead(1);
	cout << list << endl;
	list.removeHead();
	cout << list.toString(" -> ") << endl;
}

void testQueue()
{
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout << "q = " << q.toString() << endl;
	int i = q.dequeue();
	cout << "i = " << i << "   q = " << q.toString() << endl;
}

int main()
{
	cout << "testDoublyLinkedList" << endl;
	testDoublyLinkedList();

	cout << "testQueue" << endl;
	testQueue();


	return 0;
}
