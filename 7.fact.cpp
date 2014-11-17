/*7. Написать функцию, вычисляющую факториал переданного ей числа.*/
#include <iostream>
using namespace std;

void fact(int number){
	int fact = 1;
	for (int i = 2; i <= number; i++){
		fact *= i;
	}
	cout << "Факториал " << number << " равен " << fact<< "\n";
}

int main(){
	setlocale(LC_ALL, "russian");
	int number;
	cout << "\t Программа для вычисления факториала числа. \n";
	cout << "ВВедите число:\n";
	cin >> number;
	fact(number);
}