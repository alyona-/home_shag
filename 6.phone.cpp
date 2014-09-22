#include <iostream>

using namespace std;

/*
6. Пользователь указывает цену одой минуты исходящего звонка с одного мобильного оператора другому, а также продолжительность разговора в минутах и секундах. Необходимо вычислить денежную сумму на которую был произведен звонок.



*/

void main(){
	double mtc,kievstar,life,time;
	cout << "MTC : \n";
	cin >> mtc;
	cout << "Kievstar : \n";
	cin >> kievstar;
	cout << "Life : \n";
	cin >> life;
	cout << "Enter time : \n";
	cin >> time;
	cout << "MTC : " << mtc*time << " rub \n";
	cout << "Kievstar : " << kievstar*time << " rub \n";
	cout << "Life : " << life*time << " rub \n";

}