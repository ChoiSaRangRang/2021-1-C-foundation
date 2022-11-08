#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
	int getA();
	void setA(int y);
	void setF();
};

PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

int PrivateAccessError::getA() {
	return a;
}

void PrivateAccessError::setA(int y) {
	a = y;
}

void PrivateAccessError::setF() {
	this->f();
}

int main() {
	PrivateAccessError objA(1); //1로하거나 위에 바꿔
	PrivateAccessError objB(100);
	objB.setA(10); //get,set
	objB.b = 20;
	objB.setF(); //this사용
	objB.g();
}