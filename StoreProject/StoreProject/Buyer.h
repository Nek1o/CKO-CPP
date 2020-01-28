#pragma once
#include "Person.h"
#include "Seller.h"
#include "GoodsSize.h"


class Buyer : public Person {
private:
	int money;

public:
	Buyer() : Person() {
		money = 0;
	}

	void look() {
		Person::look();
		cout << "Кол-во денег " << money << endl;
	}

	int getMoney() {
		return money;
	}

	void setMoney(int money) {
		this->money = money;
	}

	bool buy(Seller &seller, Store &store, GoodsSize size) {
		
	}
};