//Объявить три переменные типа int и присвоить первой числовое значение, 
// вторая переменная равна первой переменной увеличенной на 3, а третья 
// переменная равна сумме первых двух.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int x = 10;
	int y = x + 3;
	int z = x + y;

	cout <<"Первое число: " << x << endl;
	cout <<"Первое число + 3: " << y << endl;
	cout <<"Первое + второе число: " << z << endl;
	

	

	return 0;
}