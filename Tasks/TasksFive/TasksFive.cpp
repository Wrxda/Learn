//2. Создайте 5 переменных типа char, предложите  пользователю 
// ввести слово из пяти букв и покажите эти символы (слово) на экран.

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	char one = 0;
	char two = 0;
	char three = 0;
	char four = 0;
	char five = 0;

	cout << "Введите слово из 5 букв" << endl;

	cin >> one;
	cin >> two;
	cin >> three;
	cin >> four;
	cin >> five;

	cout << "Первая буква: " << one << endl;
	cout << "Вторая буква: " << two << endl;
	cout << "Третья буква: " << three << endl;
	cout << "Четвертая буква: " << four << endl;
	cout << "Пятая буква: " << five << endl;

	return 0;

}