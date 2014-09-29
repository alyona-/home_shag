/*
2. Пользователь вводит четырехзначное число. Необходимо поменять в этом числе
1 и 2 цифры, а также 3 и 4 цифры.  Если пользователь вводит не четырехзначное 
число – вывести сообщение об ошибке.
*/
#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int number, num_1, num_2, num_3, num_4, tmp;
	cout << "Введите четырехзначное число: \n";
	cin >> number;
	if (number<1000 || number>9999){
		cout << "Вы ввели не четырехзначное число. \n";
	}
	else {
		cout << "Вы ввели число=" << number << "\n";		
		num_1 = number / 100;
		num_2 = number - (number / 100) * 100;
		cout << "num_1=" << num_1 << "; num_2=" << num_2 << "; \n";
		num_1 = ((num_1 - (num_1 / 10) * 10)) * 10 + num_1 / 10;
		num_2 = ((num_2 - (num_2 / 10) * 10)) * 10 + num_2 / 10;
		cout << "Делаем обмен: \n num_1=" << num_1 << "; num_2=" << num_2 << "; \n";
		number = num_1 * 100 + num_2;
		cout << "Получаем =" << number << "\n";
	}
}