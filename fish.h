#pragma once
#include "ani.h"
class fish:public animal {
public:
	fish() :fin(1) { nlegs = 0; std::cout << "im fish" << std::endl; }
	int fin;
	void swim() {
		std::cout << "im swimming" << std::endl;
	}
};