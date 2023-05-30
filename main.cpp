#include "ani.h"
#include "bird.h"
#include "hum.h"
#include "fish.h"
void main() {
	animal* a[3];
	for (int i = 0; i < 3; i++) {
		a[i] = new fish;
	}
	fish c;
	a[2] = &c;
	((fish*)a[2])->swim();


}