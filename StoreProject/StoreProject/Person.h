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
		cout << "Имя " << firstName << endl;
		cout << "Фамилия " << secondName << endl;
		cout << "Возраст " << age << endl;
		cout << "Пол " << gender << endl;
	}

};
