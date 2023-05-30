#pragma once
#include <iostream>
class animal {
public:
	animal() :nlegs(2) {
		std::cout << nlegs << "Animals" << std::endl;
	}
	int nlegs;
	void eat() {
		std::cout << "Im eating" << std::endl;
	}
};