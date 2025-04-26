#include <iostream>
#include<time.h>
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	
	/*for (int i = 0; i < 11; i++) {
		cout << "Num: " << i << endl;
	}*/

	cout << "Я загадал число от 1 до 10, тебе нужно его отгадать, каждый раз число обновляется!" << endl;
	srand(time(NULL));
	int randomNum = 1 + rand() % 10;
	bool stop = false;
	
	int userNumber;

	do {
		cout << "Напиши число: ";
		cin >> userNumber;
		if (userNumber != randomNum) {
			cout << "Неверное число!" << endl;
		}
		else {
			cout << "Ты победил!";
			stop = true;
		}
	} while (!stop);
	return 0;
}