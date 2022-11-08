#include <iostream>

using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int coff, int wa, int su);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};

CoffeeMachine::CoffeeMachine(int coff, int wa, int su) {
	coffee = coff;
	water = wa;
	sugar = su;
}

void CoffeeMachine::drinkEspresso() {
	coffee--;
	water--;
}

void CoffeeMachine::drinkAmericano() {
	coffee--;
	water--; water--;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee --;
	water --; water--;
	sugar --;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
}
