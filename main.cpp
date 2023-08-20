#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if ((a > 0) == (b > 0)) { // I or III
		if (a > 0) { // I
			cout << "0 " << a + b << " " << a + b << " 0";
		}
		else { // III
			cout << a + b << " 0 0 " << a + b;
		}
	}
	else {
		if (a > 0) {
			cout << "0 " << b - a << " " << a - b << " 0";
		}
		else {
			cout << a - b << " 0 0 " << b - a;
		}
	}
}
