#pragma once
#include <stack>
#include <string>

using namespace std;

class Stack {
private:
	stack<string> stck;
	Stack() {  }
	Stack(const Stack&);
	Stack& operator=(Stack&);
public:

	static Stack& getInstance() {
		static Stack s;
		return s;
	}

	void push(string s) {
		stck.push(s);
	}

	string pop() {
		string temp = stck.top();
		stck.pop();
		return temp;
	}

};