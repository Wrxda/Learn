#include <iostream>


using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	
	//Вывод значений по	1
	int num[3] = { 1,2,3 };
	cout << num[0] << endl;
	cout << num[1] << endl;
	cout << num[2] << endl;
	cout << endl;

	//Вывод сразу всех данных массива
	int num2[5] = { 1,4,14,63,1 };
	int i;
	for (i = 0; i < 5; i++) {
		cout << "Число индекса " << i << ": " << num2[i] << endl;

	}
	
	

	

//Практика

	
	float numUser[5];
	float sum = 0;
	int g;
	float min = numUser[0];

	for (g = 0; g < 5; g++) {
		cout << "Введи число индекса " << g << ": " << endl;
		cin >> numUser[g];
	}

	cout << endl;

	for (g = 0; g < 5; g++) {
		cout << "Число индекса " << g << ": " << numUser[g] << endl;
	}

	cout << endl;

	for (g = 0; g < 5; g++) {
		sum += numUser[g];
		if (numUser[g] < min) {
			min = numUser[g];
		}
	}
	
		cout << "Сумма: " << sum  << endl;
		cout << "Минимальное значение: " << min << endl;
		
		cout << endl;

		//Многомерные массивы

		int maxNum[3][2] = {
			{-5, 2},
			{10, 1},
			{1, 2}
		};

		for (int s = 0; s < 3; s++) {
			for (int f = 0; f < 2; f++) {
				cout << maxNum[f][s] << endl;
			}
		}

		
	

	

	
	
	return 0;
}


		


