#include <iostream>
#include <cmath>

using namespace std;


/*

7. Написать программу, вычисляющую, с какой скоростью бегун пробежал дистанцию. Рекомендуемый вид экрана во время выполнения программы приведен ниже:

Вычисление скорости бега
Введите длину дистанции (метров) = 1000
Введите время (мин.сек) = 3.25
Дистанция: 1000 м
Время: 3 мин 25 сек = 205 сек
Вы бежали со скоростью 17.56 км/ч


*/
void main(){
	double time, speed, distance,min,sec, time_2,km_hour,time_3;
	cout << "calculation of the running speed: \n";
	cout << "Enter distance (meters): \n";
	cin >> distance;
	cout << "Enter time (min.sec): \n";
	cin >> time;
	sec = (time -int(time))*100;
	min = int(time) * 60;
	time_2 = min + sec;
	speed = round( ((distance / time_2 )*3.6 ), 2 );
	
	cout << "Distance  : " << distance << " m \n";
	cout << "Time : " << min/60 << " min  " << sec << " sec "<<" = "<<time_2<<" sec \n";
	cout << "speed : " << speed << " km/h \n";

}