#pragma once
#include "Worker.h"
#include "Store.h"

class Seller : public Worker {
private:
	int goodsSold;
public:
	Seller() : Worker(150) {
		goodsSold = 0;
	}

	void look() {
		cout << "��������� ��������" << endl;
		cout << "����� ������ ������� " << goodsSold << endl;
		Worker::look();

	}

	/*
		����� �������� ������
		return;
		����� �������� ��������� �����,
		������� ���������� void
	*/
	bool sell(Store &s, GoodsSize size) {
	}
};