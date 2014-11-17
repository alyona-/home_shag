/*1.Написать функцию, которая возвращает куб числа.*/
#include <iostream>
#include <cmath>
using namespace std;
int cube_number(int num_1){
	return pow(num_1, 3);
}
int main(){
	setlocale(LC_ALL, "russian");
	int num_1;
	cout << "Введите число, которое хотите возвести в куб: \n";
	cin >> num_1;
	cout << cube_number(num_1) << "\n";

	return 0;
}