#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int sumOfSquares = 0;
	int squareOfSums = 0;
	for (int i = 1; i <= 100; i++) {
		sumOfSquares += pow(i, 2);
		squareOfSums += i;
	}

	squareOfSums = pow(squareOfSums, 2);

	int difference = squareOfSums - sumOfSquares;

	cout << difference << "\n";

	system("PAUSE");
	return 0;
}