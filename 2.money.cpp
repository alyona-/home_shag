#include <iostream>

using namespace std;

void main() {
	double number, rub,kop;
	cout << "Enter your number \n";
	cin >> number;
	rub = int(number);
	kop = (number - rub)*100;
	cout << rub << " rub  " << kop << " kop  \n";
}