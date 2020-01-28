#pragma once
#include "SmallGoods.h"
#include "LargeGoods.h"


class WorkBuilding {
private:
	SmallGoods smallGoods;
	LargeGoods largeGoods;

public:
	WorkBuilding() {
		smallGoods = SmallGoods();
		largeGoods = LargeGoods();
	}

	void loadGoods(SmallGoods smallGoods) {
		this->smallGoods = smallGoods;
	}

	void loadGoods(LargeGoods largeGoods) {
		this->largeGoods = largeGoods;
	}

	SmallGoods unloadSmallGoods() {
			SmallGoods temp = smallGoods;
			smallGoods.setSize(GoodsSize::none);
			return temp;
	}

	LargeGoods unloadLargeGoods() {
		LargeGoods temp = largeGoods;
		largeGoods.setSize(GoodsSize::none);
		return temp;
	}

	bool isEmpty(GoodsSize size) {
		if (size == GoodsSize::little) {
			if (smallGoods.getSize() == GoodsSize::none) {
				return true;
			}
			return false;
		}
		if (size == GoodsSize::large) {
			if (largeGoods.getSize() == GoodsSize::none) {
				return true;
			}
			return false;
		}
	}
};