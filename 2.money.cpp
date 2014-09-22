#include <iostream>
/*
2.  Написать программу, которая преобразует введенное с клавиатуры дробное число в денежный формат. Например, число 12,5 должно быть преобразовано к виду 12грн 50 коп.
*/
using namespace std;

void main() {
	double number, rub,kop;
	cout << "Enter your number \n";
	cin >> number;
	rub = int(number);
	kop = (number - rub)*100;
	cout << rub << " rub  " << kop << " kop  \n";
}