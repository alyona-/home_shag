/*Квадрат с помощью двойного цикла*/
#include  <iostream>


using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int x;
	cout << "Введите сторону квадрата: \n";
	cin >> x;
	for (int i = 1; i <= x; i++){

		for (int j = 1; j <= x; j++){
			cout << "*";
		}
		cout << "\n";
	}

}