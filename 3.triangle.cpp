#include <iostream>
#include <cmath>

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