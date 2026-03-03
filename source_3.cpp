#include <iostream>
#include <windows.h>

void swap(int& value1, int& value2) {
	value1 = value1 + value2;
	value2 = value1 - value2;
	value1 = value1 - value2;
};


int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
