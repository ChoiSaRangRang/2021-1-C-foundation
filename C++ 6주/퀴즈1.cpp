#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	cin >> s;
	int sum = 0;
	int startIndex = 0;
	while (true) {
		int findex = s.find('+', startIndex);
		if (findex == -1) {
			string part = s.substr(startIndex);
			if (part == "")
				break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = findex - startIndex;
		string part = s.substr(startIndex, count);
		cout << part << endl;
		sum += stoi(part);
		startIndex = findex + 1;
	}
	cout << "���ڵ��� ���� " << sum;
}