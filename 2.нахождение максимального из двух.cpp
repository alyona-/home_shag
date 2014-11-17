/*2.Написать функцию для нахождения наибольшего из двух чисел. */
#include <iostream>
using namespace std;

int max_value(int num_1, int num_2){
	if (num_1 > num_2) return num_1;
	else return num_2;
}
int main(){
	setlocale(LC_ALL, "russian");
	int num_1, num_2;
	cout << "Введите два числа через пробел : \n";
	cin >> num_1 >> num_2;
	cout << max_value(num_1, num_2) << "\n";
	return 0;
}