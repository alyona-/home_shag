#include <iostream>
#include <cmath>


/*

3. Пользователь вводит 3 стороны треугольника, найти площадь. Можно использовать библиотеку <cmath>

это то что мы делали на уроке

*/
using namespace std;

void main(){
	double a, b, c, p, s;
	cout << "Enter A : \n";
	cin >> a;
	cout << "Enter B: \n";
	cin >> b;
	cout << "Enter C: \n";
	cin >> c;
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << "A = " << a << "; B = " << b << "; C = " << c << "; \n";
	cout << "P = " << p << "; S = " << s << "; \n";
}