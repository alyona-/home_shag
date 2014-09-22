#include <iostream>

using namespace std;

void main(){

	double day, week, a;
	cout << "Enter day : \n";
	cin >> a;
	week = int(a /7);
	day = a - (week * 7);
	cout << week << " week  " << day << " day   \n";
}