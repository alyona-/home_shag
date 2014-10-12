/*
2.  Пользователь вводит целое число. Необходимо вывести все целые числа,
на которое заданное число делиться без остатка.
*/
#include <iostream>
using namespace std;

void main(){
	setlocale(LC_ALL, "russian");
	double number;
	int num_1, num_2;
	start:
	cout << "Введите число : \n";
	cin >> number;
	if (number - (int)number != 0 || number<0 ||number==0){
		cout << "Попробуйте ещё раз. \n";
		goto start;
	}
	else num_1 = num_2= number;

	while (num_2 != 0){
		if (0 == num_1%num_2){
			cout << num_2;
			if (num_2 != 1) cout << ", ";
			else cout << ". \n";
		}

		num_2--;
	}
}