#include <iostream>
#include <string>
using namespace std;

string reverse_string(string s) {
	string result = "";
	for (int i = s.length() - 1; i >= 0; i--) {
		result = result + s.at(i);
	}
	return result;
}

int main()
{
	int first = 999;
	int second = 999;
	int largest = 0;
	string result = "";
	int endLoop = first-100;
	while (first >= endLoop) {
		int product = first*second;
		string s = to_string(product);
		string r = reverse_string(s);
		if (s.compare(r) == 0 && product > largest) {
			largest = product;
			result = to_string(first) + "X" + to_string(second);
		}

		if (second == endLoop) {
			second = first - 1;
			first--;
		}
		else {
			second--;
		}

		if (first < endLoop && largest == 0) {
			endLoop = endLoop + 100;
		}
	}

	cout << largest << "\n" << result << "\n";
	system("PAUSE");
	return 0;
}