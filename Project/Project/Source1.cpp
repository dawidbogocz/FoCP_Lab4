#include <iostream>
#include <array>
#include <vector>

int main() {

	std::array<int,4> numbers;

	for (int i = 0; i < 4; i++) {
		numbers[i] = i;
	}

	//int step_size = &numbers[3] - &numbers[0];
	//std::cout << step_size << std::endl;

	int* ptr_numbers = &numbers[0];

	for (int i = 0; i < 4; i++) {
		std::cout << *ptr_numbers << std::endl;
		++ptr_numbers;
	}

	return 0;
}
