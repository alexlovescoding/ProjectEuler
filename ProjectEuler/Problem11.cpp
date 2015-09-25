#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream file;
	file.open("D:\\Users\\Alex\\Downloads\\grid.txt", ifstream::in);
	int num[20][20];
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			file >> num[i][j];
		}
	}

	int largestProduct = 0;

	//Forward and down diagonal iteration
	for (int i = 0; i < 17; i++) {
		int product = 0;
		for (int j = 0; j < 17; j++) {
			product = num[i][j] * num[i + 1][j + 1] * num[i + 2][j + 2] * num[i + 3][j + 3];
			if (largestProduct < product) {
				largestProduct = product;
			}
		}
	}

	//Forward and up diagonal iteration
	for (int i = 19; i > 4; i--) {
		int product = 0;
		for (int j = 0; j < 17; j++) {
			product = num[i][j] * num[i - 1][j + 1] * num[i - 2][j + 2] * num[i - 3][j + 3];
			if (largestProduct < product) {
				largestProduct = product;
			}
		}
	}

	//Backward and down diagonal iteration
	for (int i = 0; i < 17; i++) {
		int product = 0;
		for (int j = 19; j > 4; j--) {
			product = num[i][j] * num[i + 1][j - 1] * num[i + 2][j - 2] * num[i + 3][j - 3];
			if (largestProduct < product) {
				largestProduct = product;
			}
		}
	}

	//Backward and up diagonal iteration
	for (int i = 19; i > 4; i--) {
		int product = 0;
		for (int j = 19; j > 4; j--) {
			product = num[i][j] * num[i - 1][j - 1] * num[i - 2][j - 2] * num[i - 3][j - 3];
			if (largestProduct < product) {
				largestProduct = product;
			}
		}
	}

	//Left to right iteration
	for (int i = 0; i < 20; i++) {
		int product = 0;
		for (int j = 0; j < 17; j++) {
			product = num[i][j] * num[i][j + 1] * num[i][j + 2] * num[i][j + 3];
			if (largestProduct < product) {
				largestProduct = product;
			}
		}
	}

	//Up down iteration
	for (int i = 0; i < 17; i++) {
		int product = 0;
		for (int j = 0; j < 20; j++) {
			product = num[i][j] * num[i + 1][j] * num[i + 2][j] * num[i + 3][j];
			if (largestProduct < product) {
				largestProduct = product;
			}
		}
	}

	cout << largestProduct << endl;

	file.close();
	std::system("PAUSE");
	return 0;
}