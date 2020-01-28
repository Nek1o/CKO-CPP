#pragma once
#include "GoodsSize.h"

class Goods {
private:
	GoodsSize size;

public:
	Goods() {
		size = GoodsSize::none;
	}

	GoodsSize getSize() {
		return size;
	}

	void setSize(GoodsSize size) {
		this->size = size;
	}

	
};