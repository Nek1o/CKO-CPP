#include <Windows.h>
#include <time.h>

#include "Lifter.h"
#include "Warehouse.h"
#include "SmallGoods.h"
#include "Buyer.h"
#include "Manager.h"
#include "Seller.h"
#include "Lifter.h"
#include "Store.h"

/*
	Зарплата менеджера - 150 за один заказ
	Зарплата грузчика - 100 за маленький, 200 за большой
	Зарплата покупателя - 150 за продажу

	Вам необходимо написать методы buy(), sell(), manage() и lift()
	Другой код трогать не надо.
	main() тоже уже написан, если посмотрите его, возможно, будет легче писать методы
*/


int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(0));


	Warehouse warehouse = Warehouse();
	Store store = Store();

	Buyer buyer = Buyer();
	buyer.setMoney(2000);

	Lifter lifter = Lifter();
	Seller seller = Seller();
	Manager manager = Manager();
	
	for (int i = 0; i < 10; i++) {
		manager.manage(warehouse);

		lifter.lift(warehouse, store);

		if (rand() % 2 == 0) {
			cout << "Покупатель хочет маленький товар" << endl;
			cout << endl;
			buyer.buy(seller, store, GoodsSize::little);
		}
		else {
			cout << "Покупатель хочет большой товар" << endl;
			cout << endl;
			buyer.buy(seller, store, GoodsSize::large);
		}

		system("pause");
		system("cls");
	}
	manager.look();
	cout << endl;
	lifter.look();
	cout << endl;
	seller.look();
	cout << endl;
	buyer.look();
	cout << endl;
	
	system("pause");
	return 0;
}