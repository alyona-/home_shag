/*1. Дана строка символов. Заменить в ней все пробелы на табуляции.*/
#include <iostream>
#include <cstring>
using namespace std;

char *changeSpaceOnTab(char *str,int size){
	cout << "Меняем пробелы на табуляции: \n";
	for (int i = 0; i < size; i++){
		if (str[i] == 0) break;
		else if (str[i] == ' ')str[i] = '\t';
	}

	return str;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char *str = new char[size];
	cout << "Введите строку: \n";
	cin.getline(str,size);
	cout << "Вы ввели : \n" << str << endl;
	cout<<changeSpaceOnTab(str, size)<<endl;

	return 0;
}