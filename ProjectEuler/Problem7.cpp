#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
	for (int i = 2; i <= floor(sqrt(num)); i++) {
		if (num%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int primeCount = 6;
	int count = 13;
	while (primeCount < 10001) {
		count += 2;
		if (isPrime(count)) {
			primeCount++;
		}
	}

	cout << "Prime # " << primeCount << " is " << count << "\n";

	system("PAUSE");
	return 0;
}