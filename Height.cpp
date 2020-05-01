#include <iostream>
//Подключаем наш заголовочный файл с пространством имён
#include "constants.h"
 
 
//Получаем изначальную высоту
double height() 
{
	std::cout << "\n\t\tEnter the initial height of the tower in meters: ";
	double h;
	std::cin >> h;
	std::cout << "\n";
	return h;
}
 
//Получаем максимальное время падения мячика
int time() {
	std::cout << "\t\tHow many seconds do you need for iteration: ";
	int t;
	std::cin >> t;
	return t;
}
 
//Считаем...
double counting(double h, int t)
{
	return ((myConstants::gravity * pow(t, 2)) / 2);
}
 
 
//Выводим ответ
void printHeight(int t, double ah) {
	std::cout << "\n\t\tAt " << t << " seconds, the ball is at height: " << ah << " meters";
}
 
//Осуществляем цикл, учитывая все данные
double atHeight(double h) 
{
	long double ah{h};
	int t{0};
	int  t0 = time();
		while( t <= t0){
				ah = h - counting(h, t);
				if (ah > 0) {
					printHeight(t, ah);
					t++;
				}
				else {
					std::cout << "\n\t\tAt " << t << " seconds, the ball is on the ground.";
					return 0;
				}
		}
		std::cout << "\n\n\n";
}
 
 
 
//Вызываем функции
int main()
{
	double h = height();
	atHeight(h);
	return 0;
}
