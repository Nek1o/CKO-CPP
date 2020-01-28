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
	�������� ��������� - 150 �� ���� �����
	�������� �������� - 100 �� ���������, 200 �� �������
	�������� ���������� - 150 �� �������

	��� ���������� �������� ������ buy(), sell(), manage() � lift()
	������ ��� ������� �� ����.
	main() ���� ��� �������, ���� ���������� ���, ��������, ����� ����� ������ ������
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
			cout << "���������� ����� ��������� �����" << endl;
			cout << endl;
			buyer.buy(seller, store, GoodsSize::little);
		}
		else {
			cout << "���������� ����� ������� �����" << endl;
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