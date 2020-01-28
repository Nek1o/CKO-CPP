#pragma once
#include "Worker.h"
#include "Warehouse.h"
#include "Lifter.h"

class Manager : public Worker {
private:
	int ordersDone;
public:
	Manager() : Worker(150) {
		ordersDone = 0;
	}

	void look() {
		cout << "��������� ��������" << endl;
		cout << "������� ������� " << ordersDone << endl;
		Worker::look();
	}

	void manage(Warehouse &w) {
		
	}
};