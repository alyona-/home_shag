/*
3. Пользователь вводит с клавиатуры 7 целых чисел. Напишите программу,
которая определяет максимальное из этих 7 чисел (Подсказка – решение должно
быть простым).
*/
#include <iostream>

using namespace std;

void main(){
	int one, two, three, four, five, six, seven, max;
	setlocale(LC_ALL, "russian");

	cout << "Введите через пробел семь чисел: \n";
	cin >> one >> two >> three >> four >> five >> six >> seven;
	max = one;
	if (max < two) max = two;
	if (max < three) max = three;
	if (max < four) max = four;
	if (max < five) max = five;
	if (max < six) max = six;
	if (max < seven) max = seven;

	cout << "one=" << one << "; two=" << two << "; three=" << three << "; ";
	cout << "four=" << four << "; five=" << five << "; ";
	cout << "six=" << six << "; seven=" << seven << "; \n";
	cout << "max=" << max << "\n";
}