#pragma once

#include <iostream>
#include <string>
using namespace std;

class DoublyLinkedList
{
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void clear();
	bool isEmpty() const { return head == nullptr; }

	void addHead(int value);
	void addTail(int value);

	int removeHead();
	int removeTail();

	string toString(const string& sep) const;

	friend ostream& operator<<(ostream& os, const DoublyLinkedList& dlList);

private:
	struct Node {
		Node* prev = nullptr;
		Node* next = nullptr;
		int value = 0;
	};

	Node* head;
	Node* tail;
};
