/*
2. ������������ ������ �������������� �����. ���������� �������� � ���� 
����� 1 � 2 �����, � ����� 3 � 4 �����.  ���� ������������ ������ �� ��������������
����� � ������� ��������� �� ������.
*/
#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int number, a, b, c, d,tmp;
	cout << "������� �������������� �����: \n";
	cin >> number;

	if (number<1000 || number>9999){
		cout << "�� ����� �� �������������� �����. \n";
	}
	else {
		a = number / 1000;
		b = (number % 1000) / 100;
		c = ((number % 1000) % 100) / 10;
		d = ((number % 1000) % 100) % 10;
		number = b * 1000 + a * 100 + d * 10 + c;
		cout << "a=" << a << "\n";
		cout << "b=" << b << "\n";
		cout << "c=" << c << "\n";
		cout << "d=" << d << "\n";
		cout << "number=" << number << "\n";

	}

}