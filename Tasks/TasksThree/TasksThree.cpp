//3. Объявить переменные, для подсчета общего количества предметов для сервировки стола. 
// Например чашки, такое же количество блюдец и ложек.

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int saucers = 17;
	int cups = saucers;
	int spoons = cups;
	
	int totalQuantity = saucers;
	

	cout << "Общее количество: " << totalQuantity << endl;
	return 0;
}