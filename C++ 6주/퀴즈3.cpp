#include <iostream>

using namespace std;

double biggest(double x[], int n) {
	double big;
	big = x[0];
	for (int i = 1; i < 5; i++) {
		if (big < x[i]) {
			big = x[i];
		}
	}
	return big;
}

int main() {
	double a[5];
	cout << "5���� �Ǽ��� �Է��ϼ���.>>";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	cout << "���� ū �� = " << biggest(a, 5) << endl;
}