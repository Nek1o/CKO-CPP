#pragma once
#include "Person.h"

class Worker : public Person {
private:
	int salary;
	int salarySize;

public:
	Worker(int salarySize) : Person() {
		salary = 0;
		this->salarySize = salarySize;
	}

	void look() {
		Person::look();
		cout << "Зарплата " << salary << endl;
	}

	void increaseSalary() {
		salary += salarySize;
	}
};