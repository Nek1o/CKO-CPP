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
		cout << "Профессия продавец" << endl;
		cout << "Всего продал товаров " << goodsSold << endl;
		Worker::look();

	}

	/*
		Можно написать просто
		return;
		Чтобы досрочно заврешить метод,
		который возвращает void
	*/
	bool sell(Store &s, GoodsSize size) {
	}
};