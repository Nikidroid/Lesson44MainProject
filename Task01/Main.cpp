#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int size;
	do{
		cout << "Enter size of array: ";
		cin >> size;
	} while (size <= 0);

	int* pointer = new int[size];
	
	//*(pointer + 0) = 11;
	//*(pointer + 1) = 22;
	//*(pointer + 2) = 33;
	//*(pointer + 3) = 44;
	//*(pointer + 4) = 55;

	//cout << pointer + 0 << " - " << *(pointer + 0) << endl;
	//cout << pointer + 1 << " - " << *(pointer + 1) << endl;
	//cout << pointer + 2 << " - " << *(pointer + 2) << endl;
	//cout << pointer + 3 << " - " << *(pointer + 3) << endl;
	//cout << pointer + 4 << " - " << *(pointer + 4) << endl;

	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 10;
	}

	cout << "\nElements of dynamic array: ";
	for (int i = 0; i < size; i++) {
		cout << *(pointer + i) << " ";
	}

	return 0;
}