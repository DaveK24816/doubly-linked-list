#pragma once

#include "DoublyLinkedList.h"

class Queue {
public:
	Queue() = default;

	void enqueue(int value) { list.addTail(value); }
	int dequeue() { return list.removeHead(); }
	bool isEmpty() const { return list.isEmpty(); }
	void clear() { list.clear(); }
	string toString(const string& sep = ", ") const { return list.toString(sep); }

private:
	DoublyLinkedList list;
};
