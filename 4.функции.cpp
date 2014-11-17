/*4. Написать функцию, которая  в зависимости
от выбора пользователя вызывает функции сложения, произведения,
вычитания, деления двух чисел(эти функции тоже нужно
написать самостоятельно)*/
#include <iostream>
using namespace std;

int addition(int num_1, int num_2){
	return num_1 + num_2;
}

int substraction(int num_1, int num_2){
return num_1 - num_2;
}
float division(float num_1, int num_2){
 return num_1 / num_2;
}
int multiplication(int num_1, int num_2){
return num_1 *num_2;
} 
float greeting(float num_1, int num_2, int operation){
	float result;
	switch (operation){
	case 1: {
		result = addition(num_1, num_2);
		break;
	}
	 case 2: {
		 result=substraction(num_1, num_2);
		 break;
	 }
	 case 3: {
		 result=division(num_1, num_2);
		 break;
	 }
	 case 4:{
		 result=multiplication(num_1,num_2);
		 break;
	 } 
	}
	return result;
}

int main(){	
		setlocale(LC_ALL, "russian");
		float num_1, result;
		int num_2, operation;
	cout << "\t Здравствуйте, вы попали в программу калькулятор. \n";
	cout << "\t Для продолжения введите через пробел: \n ";
	cout << "\t 1. - первое число, 2. -второе число, 3. операцию \n";
	cout << "\t 1. - сложенижение; 2.-вычитание; 3.-деление; 4.-умножение. \n";
	cout << "Введите два числа через пробел : \n";
	cin >> num_1 >> num_2 >> operation;
	cout <<"Результат = " <<greeting(num_1, num_2, operation) << "\n";

	return 0;
}