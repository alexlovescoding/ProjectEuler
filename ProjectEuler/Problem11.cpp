#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream file;
	file.open("D:\\Users\\Alex\\Downloads\\grid.txt", ifstream::in);
	int num[20][20];
	char input[400];
	while (file.eof()) {
		file >> input;
	}
	file.close();
	cout << input << endl;
	std::system("PAUSE");
	return 0;
}