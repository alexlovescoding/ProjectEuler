#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
	if (num == 1) {
		return false;
	}
	else if (num < 4) {
		return true;
	}
	else if (num % 2 == 0) {
		return false;
	}
	else if (num < 9) {
		return true;
	}
	else if (num % 3 == 0) {
		return false;
	}
	else {
		int testNum = floor(sqrt(num));
		int counter = 5;
		while (counter <= testNum) {
			if (num % counter == 0) {
				return false;
			}
			if (num % (counter + 2) == 0) {
				return false;
			}
			counter += 6;
		}
	}

	return true;
}

int main() {
	unsigned long long sum = 5;
	unsigned int prime = 3;
	while (prime < 2000000) {
		prime += 2;
		if (isPrime(prime)) {
			sum += prime;
		}
	}

	cout << sum << endl;
	system("PAUSE");
	return 0;
}