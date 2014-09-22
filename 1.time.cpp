#include <iostream>


/*
1. Пользователь вводит с клавиатуры время в секундах. Необходимо написать программу, которая переведет введенные пользователем секунды  в часы, минуты, секунды и выводит их на экран. Например, 3661 должно быть преобразовано к 
виду 1час, 1мин, 1сек.


*/
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