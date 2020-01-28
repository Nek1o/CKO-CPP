#pragma once
#include <iostream>

using namespace std;

struct ForwardNode {
	int value;
	ForwardNode *prev;
};

class Stack {
private:
	ForwardNode* head;
	int size;
public:
	Stack() {
		head = nullptr;
		size = 0;
	}

	~Stack() {
		// Деструктор
	}


	void push(int value) {
		ForwardNode *temp = new ForwardNode;
		temp->value = value;

		if (size == 0) {
			head = temp;
		}
		else {
			temp->prev = head;
			head = temp;
		}
		size++;
	}

	int pop() {
		if (size > 0) {
			int tempValue = head->value;
			ForwardNode* temp = head;
			head = head->prev;
			delete temp;
			size--;
		}
		return tempValue;
	}

	// int peek() {
	//
	//}
};