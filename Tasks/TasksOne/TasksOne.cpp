//Объявить переменные с помощью которых можно будет 
//посчитать общую сумму покупки нескольких товаров.
//Например плитки шоколада, кофе и пакеты молока.(Типы данных)

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int chocolate = 15;
	int milk = 3;
	int coffe = 5;

	int chocoPrice = 78;
	int milkPrice = 45;
	int coffePrice = 120;

	int sum = (chocolate* chocoPrice)+(milk* milkPrice)+(coffe* coffePrice);
	int x;

	cout << "Вы хотите посчитать общую стоимость покупки?" << endl; 
	cout << "1 - Да!\n2 - Нет!" << endl;
	cin >> x;

	if (x == 1) {
		cout << "Общая стоимость: " << sum << " рублей.";
	}
	else {
		cout << "Досвидания!";
	}



	return 0;
}