#include <iostream>

using namespace std;

void main(){

	double hour, min, sec, a;
	cout << "Vvedite kolichestvo sekynd : \n";
	cin >> a;
	cout << a<<"\n";
	hour = int(a / 3600);
	sec = a - (hour * 3600);
	min = int(sec / 60);
	sec = sec - (min * 60);
	cout << hour << " h  " << min << " m  " << sec << " s  \n";
}