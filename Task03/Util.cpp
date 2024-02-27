#include <stdlib.h>
#include <string>

using namespace std;

void random_init(int* vector, int size, int bound) {
	for (int i = 0; i < size; i++) {
		*(vector + i) = rand() % (bound + 1);
	}
}

string vector_to_string(int* vector, int size) {
	string msg = "";

	for (int i = 0; i < size; i++) {
		msg += to_string(*(vector + i)) + " ";
	}
	return msg;
}