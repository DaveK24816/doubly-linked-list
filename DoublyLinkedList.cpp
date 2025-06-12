#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
	clear();
}

void DoublyLinkedList::clear() {
	while (head) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	tail = nullptr;
}

void DoublyLinkedList::addHead(int value) {
	Node* newNode = new Node{ nullptr, head, value };
	if (head) head->prev = newNode;
	else tail = newNode;
	head = newNode;
}

void DoublyLinkedList::addTail(int value) {
	Node* newNode = new Node{ tail, nullptr, value };
	if (tail) tail->next = newNode;
	else head = newNode;
	tail = newNode;
}

int DoublyLinkedList::removeHead() {
	if (!head) return -1;
	int val = head->value;
	Node* temp = head;
	head = head->next;
	if (head) head->prev = nullptr;
	else tail = nullptr;
	delete temp;
	return val;
}

int DoublyLinkedList::removeTail() {
	if (!tail) return -1;
	int val = tail->value;
	Node* temp = tail;
	tail = tail->prev;
	if (tail) tail->next = nullptr;
	else head = nullptr;
	delete temp;
	return val;
}

string DoublyLinkedList::toString(const string& sep) const {
	string res;
	Node* curr = head;
	while (curr) {
		res += to_string(curr->value);
		if (curr->next) res += sep;
		curr = curr->next;
	}
	return res;
}

ostream& operator<<(ostream& os, const DoublyLinkedList& dlList) {
	DoublyLinkedList::Node* curr = dlList.head;
	while (curr) {
		os << curr->value << " ";
		curr = curr->next;
	}
	return os;
}
