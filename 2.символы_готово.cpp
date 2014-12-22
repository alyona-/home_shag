/*2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.*/
#include <iostream>

using namespace std;

char *countTheNumber(char *str, int size);
void printResult(int number, int letterBigLat, int letterSmallLat, int letterBigKirr, int letterSmallKirr, int charecter);

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char *str = new char[size];
	cout << "Введите строку :\n";
	cin.getline(str, size);
	countTheNumber(str, size);



	return 0;
}


char *countTheNumber(char *str, int size){
	int number = 0, charecter = 0, letterBigLat = 0, letterSmallLat = 0, letterBigKirr = 0, letterSmallKirr = 0;
	int x;
	for (int i = 0; i < size; i++){
		if (str[i] == '\0'){
			printResult(number, letterBigLat, letterSmallLat, letterBigKirr, letterSmallKirr, charecter);
			return 0;
		}
		else {
			x = str[i];
			if ((x>48) && (x < 58)) number++;
			else if ((x>64)&& (x<91)) letterBigLat++;
			else if ((x>96)&& (x<123)) letterSmallLat++;
			else if ((x>-97) && (x<-16)) letterSmallKirr++;
			else if ((x>-129) && (x<-96)) letterBigKirr++;
			else charecter++;
		}
	}

}


void printResult(int number, int letterBigLat, int letterSmallLat, int letterBigKirr, int letterSmallKirr, int charecter)
{
	cout << "Кол-во цифр в тексте = " << number << "; \n";
	cout << "Кол-во лат. символов в верхнем регистре = " << letterBigLat << "; \n";
	cout << "Кол-во лат. символов в нижнем регистре = " << letterSmallLat << "; \n";
	cout << "Кол-во кирил. символов в верхнем регистре = " << letterBigKirr << "; \n";
	cout << "Кол-во кирил. символов в нижнем регистре = " << letterSmallKirr << "; \n";
	cout << "Кол-во других символов = " << charecter << "; \n";
}