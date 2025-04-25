#include <iostream>
#include <cstdlib>

int main() {
	using namespace std;
	setlocale(LC_ALL, "RU");

	int a, b, c;

	cout << "Введи свой возраст\n";
	cin >> a;
	cout << "Ваш возраст: " << a << endl;
	if (a < 18) {
		cout << "Ты ещё школьник!\n";
	}
	else {
		cout << "Ты взрослый человек!\n";
	}
}