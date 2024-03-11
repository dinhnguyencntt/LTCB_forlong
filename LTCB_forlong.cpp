#include <iostream>
using namespace std;
int main() {
	int so; cout << "nhapso:"; cin >> so;
	for (int i = 0; i < so; i++) {
		for (int j = so; j > i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}