#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int sum = 0;
	int N;
	int count = 0;
	
	cout << "Введите число, которое делятся либо на 3, либо на 5, но не одновременно на 3 и 5." << endl;
	cin >> N;
	if ((N % 3 == 0 || N % 5 == 0) && N % 15 != 0) {
		for (int i = 1; i <= N; i++) {
			 sum += i;
			 count++;
			 

		}
		cout <<"Сумма чисел: " << sum << endl;
		cout <<"Кол-во чисел: " << count << endl;
	}
	else {
		cout << "Число не подходит!" << endl;
		return 1;
	}
	return 0;
}