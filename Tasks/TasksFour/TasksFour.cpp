//1. Создайте 4 переменные с разными типами данных и предложите 
// пользователю ввести в них значения. 
// После ввода, отобразите их на экране.

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	int oneNum = 0;
	char twoNum = 0;
	bool trueFalse = 0;
	float symbol = 0;

	cout << "Введи 4 значения! число, символ, 1 или 0, дробное число" << endl;
	cin >> oneNum;
	cin >> twoNum;
	cin >> trueFalse;
	cin >> symbol;
	cout << "Твои значения: " << endl;
	cout << oneNum << endl;
	cout << twoNum << endl;
	cout << trueFalse << endl;
	cout << symbol << endl;
	return 0;
}