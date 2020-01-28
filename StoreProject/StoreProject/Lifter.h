#pragma once
#include "Worker.h"
#include "Store.h"
#include "Warehouse.h"

class Lifter : public Worker {
private:
	int goodsLifted;
public:
	Lifter() : Worker(100) {
		goodsLifted = 0;
	}

	void look() {
		cout << "Профессия гхрущик" << endl;
		cout << "Всего разнёс товаров " << goodsLifted << endl;
		Worker::look();
	}

	bool lift(Warehouse &w, Store &s) {

	}
};