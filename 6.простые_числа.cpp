/*6. Написать функцию, которая проверяет, является ли переданное ей число простым? Число называется простым, 
если оно делится без остатка только на себя и на единицу. */
#include <iostream>
using namespace std;

int simple_number(int number){
	for (int i = 2; i < number; i++){
		if (number%i == 0) {
			cout << "Число не простое.\n";
			return 0;
		}		
	}
	cout << "Число простое. \n";
	return 0;
}

int main(){
	setlocale(LC_ALL, "russian");
	int number;
	cout << "\t Программа проверки является ли введеное число простым. \n";
	cout << "ВВедите число:\n";
	cin >> number;
	simple_number(number);
}