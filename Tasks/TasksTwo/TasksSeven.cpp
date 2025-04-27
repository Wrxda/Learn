//1. Распространённая задача:  Дано четырехзначное число (к примеру 5678), 
// вывести на экран  в обратном порядке цифры из которых это число состоит. 
// То есть мы должны увидеть на экране 8765.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int number = 9832;
	cout << "Дано число: " << number<<endl;
	cout << "Число наизнанку: ";

	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;

	
	return 0;
}