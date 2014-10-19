/*Квадрат с помощью одинарного цикла*/
#include <iostream>
using namespace std;

void main(){
	setlocale(LC_ALL, "russian");
	int num, p;
	cout << "Введите сторону квадрата : \n";
	cin >> num;
	p = num*num;
	for (int i = 1; i <=p; i++) {
		cout << "*";
		if (i%num == 0){
		cout << "\n";
		}
	}

}