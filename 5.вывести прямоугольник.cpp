/*5. Написать функцию, выводящую на экран прямоугольник с высотой N и шириной K. */
#include <iostream>
using namespace std;

int rectangle(int a, int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (i == 0 || i == a - 1||j==0||j==b-1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
int main(){
	setlocale(LC_ALL, "russian");
	int a, b;
	cout << "Введите высоту прямоугольника: \n";
	cin >> a;
	cout << "Введите ширину прямоугольника: \n";
	cin >> b;
	rectangle(a, b);


}