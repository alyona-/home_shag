/*Квадрат рамка с помощью одинарного цикла*/
#include <iostream>
using namespace std;

void main(){
	setlocale(LC_ALL, "russian");
	int num, p;
	cout << "Введите сторону квадрата : \n";
	cin >> num;
	p = num*num;

	for (int i = 1; i <= p; i++) {
		if (i <= num) {

			cout << "*";

		}
		else if (i > p - num){
			cout << "*";
		}
		else {
			if (i%num - 1 == 0) cout << "*";
			else if (i%num == 0) cout << "*";
			else cout << " ";

		}
		if (i%num == 0) cout << "\n";

	}
	cout << "\n";

}