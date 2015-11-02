#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num = 30;
	int sum = 0;
	int numFactors = 2;
	double sqrtDouble = 0.0;
	int sqrtInt = 0;
	while (true) {
		numFactors = 2;
		sum = 0.5*(num)*(num + 1);
		sqrtDouble = sqrt(sum);
		sqrtInt = (int)floor(sqrt(sum));
		if (sqrtDouble == sqrtInt) {
			numFactors ++;
		}
		for (int i = 2; i < sqrtInt; i++){
			if (sum%i == 0) {
				numFactors += 2;
			}
		}
		if (numFactors > 500) {
			break;
		}
		num++;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}