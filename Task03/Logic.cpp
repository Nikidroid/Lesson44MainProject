// O(N^2)
bool is_the_same_values(int* vector, int size) {
	for (int i = 0; i < size; i++) {
		int element = *(vector + i);
		for (int j = i + 1; j < size; j++)
		{
			if (element == *(vector + j)) {
				return true;
			}
		}
	}
	return false;
}

bool is_different_values(int* vector, int size) {
	return !is_the_same_values(vector, size);
}