#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main() {
	string firstword;
	string secondword;
	set <char> firstWordList;
	set <char> secondWordList;
	cin >> firstword;
	cin >> secondword;
	while (firstword.compare("last") != 0 && secondword.compare("pair")) {
		for (int i = 0; i < firstword.length(); i++) {
			firstWordList.insert(firstword.at(i));
		}
		for (int i = 0; i < secondword.length(); i++) {
			secondWordList.insert(secondword.at(i));
		}

		if (firstWordList == secondWordList) {
			cout << "Same" << endl;
		}
		else {
			cout << "Different" << endl;
		}
		firstWordList.clear();
		secondWordList.clear();
		cin >> firstword;
		cin >> secondword;
	}

	return 0;
}