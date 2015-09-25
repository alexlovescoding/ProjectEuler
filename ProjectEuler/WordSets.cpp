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
		sort(firstWordList.begin(), firstWordList.end());
		sort(secondWordList.begin(), secondWordList.end());
		bool same = true;
		for (int i = 0; i < firstWordList.size(); i++) {
			if (firstWordList[i] != secondWordList[i]) {
				same = false;
				break;
			}
		}
		if (same == true) {
			cout << "Same" << endl;
		}
		else {
			cout << "Different" << endl;
		}
		cin >> firstword;
		cin >> secondword;
	}

	return 0;
}