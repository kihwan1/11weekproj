#pragma once
#include "ani.h"
class bird :public animal{
public:
	bird() :nwings(2) {};
	int nwings;
	void fly() {
		std::cout << "Im flying" << std::endl;
	}
};