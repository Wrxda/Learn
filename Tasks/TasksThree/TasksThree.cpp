#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int pepNum = 0;
	int pepPick;

	cout << "Что конвертировать?" << endl;
	cout << "1 - Cекунды в минуты" << endl;
	cout << "2 - Минуты в часы" << endl;
	cout << "3 - Часы в дни" << endl;
	cout << "4 - Дни в недели" << endl;
	cin >> pepPick;
	
	if (pepPick<= 0 || pepPick > 4) {
		cout << "Такого значения не дано!" << endl;
	}
	else {
cout << "Введи число: ";
	cin >> pepNum;

	cout << "Ваш выбор: " << pepPick << endl;
	cout << "Ваше число: " << pepNum << endl;

	switch (pepPick) {
	case 1:
		cout <<"Секунды в минуты: " << pepNum / 60 << endl;
	break;
	case 2:
		cout <<"Минуты в часы: " << pepNum / 60 << endl;
		break;
	case 3:
		cout <<"Часы в дни: " << pepNum / 24 << endl;
		break;
	case 4:
		cout <<"Дни в недели: " << pepNum / 7 << endl;
		break;
	}
}

	

	return 0;
}