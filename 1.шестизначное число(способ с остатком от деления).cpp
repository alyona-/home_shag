/*
1. ������������ ������ � ���������� ����� ������������ �����. �������� ���������, 
������� ����������, �������� �� ��������� ����� � ���������� (���������� ���������
������������ �����, � �������� ����� ������ 3 ���� ����� ����� ������ ���� ����).
���� ������������ ���� �� ������������ ����� � ��������� �� ������.
*/
#include <iostream>

using namespace std;

void main(){
	int number, num_1, num_2;
	setlocale(LC_ALL, "russian");
	cout << "������� ������������ �����: \n";
	cin >> number;
	if (number<100000 || number>999999){
		cout << "�� ����� �� ������������ �����. \n";
	}
	else {
		num_1 = number / 1000;
		num_2 = number % 1000;
		cout << "num_1=" << num_1 << "\n";
		cout << "num_2=" << num_2 << "\n";
		
		num_1 = (num_1 / 100) + (num_1 % 100) / 10 + (num_1 % 100) % 10;
		num_2 = (num_2 / 100) + (num_2 % 100) / 10 + (num_2 % 100) % 10;
		cout << "����� ������ ���� ����� = " << num_1 << "\n";
		cout << "����� ������ ���� �����=" << num_2 << "\n";
			num_1 == num_2 ? cout << "��������� ����� ����������. \n" : cout << "��������� ����� �� ����������. \n";
	}
}