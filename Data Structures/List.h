#pragma once
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node *next;
	Node *prev;
};

class List {
private:
	int size;
	Node *head;
	Node *tail;

public:
	List() {
		size = 0;
		head = nullptr;
		tail = head;
	}

	~List() {

	}

	void add(int value) {
		Node *temp = new Node();
		temp->value = value;

		if (size == 0) {
			head = temp;
			tail = head;
		}
		else {
			temp->prev = tail;
			tail->next = temp;
			tail = temp;
		}
		size++;
	}

	void print() {
		Node *temp = head;
		for (size_t i = 0; i < size; i++) {
			cout << temp->value << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	// void add(int value, int index) { 
	//
	//}

	//List *join(List *l1, List *l2) {
	//
	//}
};