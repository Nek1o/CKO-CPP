#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string firstName;
	string secondName;
	int age;
	char gender;

public:
	Person() {
		firstName = "";
		secondName = "";
		age = 0;
		gender = ' ';
	}

	void look() {
		cout << "��� " << firstName << endl;
		cout << "������� " << secondName << endl;
		cout << "������� " << age << endl;
		cout << "��� " << gender << endl;
	}

};
