//Пользователь вводит сумму депозита и количество месяцев хранения денег в банке. 
// Необходимо провести расчет и показать на экран прибыль с депозита в месяц,  
// за весь срок депозита, и общую сумму к выплате в конце срока.  
// Валюта пусть будет – доллар США. Процентная ставка – 5% годовых. 

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	
		float sumDeposit = 0;
		float interestRate = 5;
		float result = 0;

		int dayYear = 365;
		int dayMount = 30;
		int numMount = 0;
		int agreement;
		int calculation;
		
		cout << "Добро пожаловать в мипБанк!" << endl;
		cout << "Хотите внести депозит?" << endl;
		cout << "1 - да" << endl;
		cout << "2 - нет" << endl;
		cin >> agreement;

		if (agreement == 1) {
			cout << "Введите сумму депозита" << endl;
			cin >> sumDeposit;
			cout << "Введите кол-во месяцев" << endl;
			cin >> numMount;
			cout << "Ваша сумма: " << sumDeposit << " $" << endl;
			cout << "Кол-во месяцев: " << numMount << endl;
		}
		else {
			cout << "Досвидания!" << endl << endl;
		}

		cout << "Хотите расчитать: прибыль с депозита в месяц, за весь срок депозита и общую сумму к выплате в конце срока? " << endl;
		cout << "1 - да" << endl;
		cout << "2 - нет" << endl;
		cin >> calculation;


		//СуммаДепозита * (ПроцентнаяСтавка / 100)  / ДнейВГоду * ДнейВМесяце. - формула.
		if (calculation == 1) {
			result = sumDeposit * (interestRate / 100) / dayYear * dayMount;
			cout << "Ваш процент в месяц: " << result << endl;
			result *= numMount;
			cout << "Ваш процент за весь срок: " << result << endl;
			cout << "Полная сумма выплаты: " << sumDeposit + result << endl;
		}
		else {
			cout << "Досвидания!" << endl;
		}

		return 0;

}