/*
2. ������������ ������ �������������� �����. ���������� �������� � ���� �����
1 � 2 �����, � ����� 3 � 4 �����.  ���� ������������ ������ �� �������������� 
����� � ������� ��������� �� ������.
*/
#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int number, num_1, num_2, num_3, num_4, tmp;
	cout << "������� �������������� �����: \n";
	cin >> number;
	if (number<1000 || number>9999){
		cout << "�� ����� �� �������������� �����. \n";
	}
	else {
		/*num_1 = number / 100;
		num_2 = number - (number/100)*100;

		tmp = ((num_2-(num_2/10)*10)) *10 +num_2/10; */

		cout << "�� ����� �����=" << number << "\n";		
		num_1 = number / 100;
		num_2 = number - (number / 100) * 100;
		cout << "num_1=" << num_1 << "; num_2=" << num_2 << "; \n";
		num_1 = ((num_1 - (num_1 / 10) * 10)) * 10 + num_1 / 10;
		num_2 = ((num_2 - (num_2 / 10) * 10)) * 10 + num_2 / 10;
		cout << "������ �����: \n num_1=" << num_1 << "; num_2=" << num_2 << "; \n";
		number = num_1 * 100 + num_2;
		cout << "�������� =" << number << "\n";
		//cout << "num_1 =" << num_1 << " \n";
		//cout << "num_2=" << num_2 << "\n";
		//cout << "tmp = " << tmp << "\n";
	}
}