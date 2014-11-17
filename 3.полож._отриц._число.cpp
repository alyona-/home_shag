/*3.Написать функцию, которая возвращает истину, если передаваемое значение
положительное и ложь, если отрицательное.*/
#include <iostream>
using namespace std;

int value(int num_1){
	if (num_1 > 0) return true;
	else return false;
}
int main(){
	setlocale(LC_ALL, "russian");
	int num_1;
	cout << "Введите число : \n";
	cin >> num_1;
	cout << value(num_1) << "\n";
	return 0;
}