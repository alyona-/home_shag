/*�*/
#include  <iostream>


using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int x;
	cout << "������� ������� ��������: \n";
	cin >> x;
	for (int i = 1; i <= x; i++){

		for (int j = 1; j <= x; j++){
			if (j<i) cout << " ";
			else cout << "*";
			
		}
		cout << "\n";
	}

}