//Пользователь вводит порядковый номер пальца руки. 
// Необходимо показать его название на экран.

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int numFinger = 0;
	cout << "Введите номер пальца от 1 до 5" << endl;
	cin >> numFinger;

	if (numFinger == 1) {
		cout << "1 - это большой палец" << endl;
	}
	else if(numFinger == 2){
		cout << "2 - это указательный палец" << endl;
	}
	else if (numFinger == 3) {
		cout << "3 - это средний палец" << endl;
	}
	else if (numFinger == 4) {
		cout << "4 - это безымянный палец" << endl;
	}
	else if (numFinger == 5) {
		cout << "5 - это мизинец" << endl;
	}
	else if (numFinger == 12345) {
		cout << "Так нельзя!" << endl;
	}
	else{
		cout << "Так нельзя!" << endl;
	}

	return 0;

}