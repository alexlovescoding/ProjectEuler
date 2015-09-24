#include <iostream>
using namespace std;
int main() {
	int number = 2520;
	bool divisible;
	while (true) {
		divisible = true;
		for (int i = 3; i < 20; i++) {
			if (number % i != 0) {
				divisible = false;
				break;
			}
		}
		if (divisible) {
			break;
		}
		else {
			number += 20;
		}
	}
	cout << number << "\n";
	system("PAUSE");
	return 0;
}