//4. Пользователь должен ввести 2 числа. 
// Вам надо показать на экран произведение этих чисел, сумму и разницу.  
// Покажите так же среднее арифметическое этих введенных чисел.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	float numOne = 0;
	float numTwo = 0;

	cout << "Введите 2 числа" << endl;
	cin >> numOne >> numTwo;

	float work = numOne * numTwo;
	float sum = numOne + numTwo;
	float difference = numOne - numTwo;
	float arithmeticMean = (numOne + numTwo) / 2;

	
	cout << "Умножение 2-х чисел: " << work << endl;
	cout << "Сумма 2-х чисел: " << sum << endl;
	cout << "Вычитание 2-х чисел: " << difference << endl;
	cout << "Среднее арифмитическое 2-х чисел: " << arithmeticMean << endl;


	return 0;
}