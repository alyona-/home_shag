#include <iostream>


/*
5. Написать программу, которая преобразует введенное пользователем количество дней в количество полных недель и оставшихся дней. Например, пользователь ввел 17 дней, программа должна вывести на экран 2 недели и 3 дня.

*/
using namespace std;

void main(){

	double day, week, a;
	cout << "Enter day : \n";
	cin >> a;
	week = int(a /7);
	day = a - (week * 7);
	cout << week << " week  " << day << " day   \n";
}