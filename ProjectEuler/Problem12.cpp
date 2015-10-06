#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
	if (num == 1) {
		return false;
	}
	else if(num < 4) {
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
		int limit = floor(sqrt(num));
		int counter = 5;
		while (counter <= limit) {
			if (num % counter == 0) {
				return false;
			}
			else if (num % (counter + 2) == 0) {
				return false;
			}
			counter += 6;
		}
	}
	return true;
}

int main() {
	bool foundNum = false;
	int counter = 0;
	int primeOne = 0;
	int primeTwo = 0;
	int num = 0;
	int n = 1;
	while (!foundNum) {
		num = (1.0 / 2)*n*(n + 1);
		primeOne = 0;
		primeTwo = 0;
		for (int i = 0; i < num; i++) {
			if (primeOne != 0 && primeTwo != 0) {
				break;
			}
			else if (num%i == 0 && isPrime(i)) {
				if (primeOne == 0) {
					primeOne = i;
				}
				else if(primeTwo == 0){
					primeTwo = i;
				}
			}
		}
		n++;
		cout << primeOne << " " << primeTwo << endl;
	}
	system("PAUSE");
	return 0;
}