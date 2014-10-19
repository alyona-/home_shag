/*г*/
#include  <iostream>


using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int x;
	cout << "Введите сторону квадрата: \n";
	cin >> x;
	for (int i = x; i >= 1; i--){

		for (int j = x; j >= 1; j--){
			if (j >= i&&j <= x - i) cout << "*";
			else cout << " ";

		}
		cout << "\n";
	}

}