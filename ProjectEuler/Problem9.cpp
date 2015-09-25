#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

vector<int> sumPythTriple(int num) {
	vector<int> factorList;
	int half = num / 2;

	for (int i = 1; i <= half; i++) {
		if (half % i == 0) {
			factorList.push_back(i);
		}
	}


	for (int i = 0; i < factorList.size(); i++)
	{
		int m = factorList[i];
		for (int j = 0; j < factorList.size(); j++) {
			int s = factorList[j];
			if (m < s && s < (2 * m) && half % (m * s) == 0) {
				int n = s - m;
				int k = half / (m*s);

				int a = (k*(m*m - n*n));
				int b = (k*(2 * m*n));
				int c = (k*(m*m + n*n));
				int sum = a + b + c;
				if (sum == 1000) {
					vector<int> result;
					result.push_back(a);
					result.push_back(b);
					result.push_back(c);
					return result;
				}
			}
		}
	}
	vector<int> nil;
	nil.push_back(0);
	nil.push_back(0);
	nil.push_back(0);
	return nil;
}

int main() {
	int n = 1000;
	vector<int> triplet = sumPythTriple(n);
	int product = triplet[0] * triplet[1] * triplet[2];
	string output = to_string(triplet[0]) + " x " + to_string(triplet[1]) + " x " + to_string(triplet[2]) + " = " + to_string(product);
	cout << output << endl;

	system("PAUSE");
	return 0;
}