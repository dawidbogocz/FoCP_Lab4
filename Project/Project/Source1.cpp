#include <iostream>
#include <array>
#include <vector>

int main() {

	int variable = 7;

	int* ptr;

	std::cout << ptr << std::endl;

	ptr = &variable;
	std::cout << *ptr << std::endl;
	*ptr = 25;
	std::cout << variable << std::endl;

	return 0;
}
