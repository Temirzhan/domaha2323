#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;
float ShiftRight3(float *A, float *B, float *C);
float coutABC (float A, float B, float C);
float ShiftLeft3(float *A, float *B, float *C);
int IsLeapYear(int year);
int getCountDayMonth(int month, int year);
int getPrevDay(int year, int month, int day);
int getNextDay(int god, int month, int day);
double c(double x, double y);
double d(double x1, double y1, double x2, double y2);
int F(int m2, int m1, int m0);

char f;
void main()
{
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		cout << "Выберте задание" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			/*	Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг :
			значение A переходит в B, значение B — в C, значение C — в A(A, B, C — вещественные параметры, являющиеся одновременно входными и выходными).
			C помощью этой процедуры выполнить правый циклический сдвиг для двух данных наборов из трех чисел : (A1, B1, C1) и(A2, B2, C2).
			*/

			float A;
			cout << "Введите число A" << endl;
			cin >> A;
			float B;
			cout << "Введите число B" << endl;
			cin >> B;
			float C;
			cout << "Введите число C" << endl;
			cin >> C;
			do {
				ShiftRight3(&A, &B, &C);
				cout << A << endl;
				coutABC(A, B, C);
				cout << "Хотите сделать еще один циклический сдвиг " << endl;
				cout << "y-da n-no" << endl;
				cin >> f;
			} while (f == 'y');
		}
		break;
		case 2:
		{
			/*Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг: значение A переходит в C, значение C — в B,
			значение B — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и выходными).
			С помощью этой процедуры выполнить левый циклический сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
*/
			float A;
			cout << "Введите число A" << endl;
			cin >> A;
			float B;
			cout << "Введите число B" << endl;
			cin >> B;
			float C;
			cout << "Введите число C" << endl;
			cin >> C;
			do {
				ShiftLeft3(&A, &B, &C);
				cout << A << endl;
				coutABC(A, B, C);
				cout << "Хотите сделать еще один циклический сдвиг " << endl;
				cout << "y-da n-no" << endl;
				cin >> f;
			} while (f == 'y');
		}
		break;

		case 3:
		{
			/*Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если год Y (целое положительное число) является високосным, 
			и False в противном случае. Вывести значение функции IsLeapYear для пяти данных значений параметра Y. Високосным считается год, делящийся на 4,
			за исключением тех годов, которые делятся на 100 и не делятся на 400.
*/
			int year;
			cout << "Введите год" << endl;
			cin >> year;
			if (IsLeapYear(year))
			{
				cout << "Высокосный" << endl;
			}
			else
			{
				cout << "Не высокосный" << endl;
			}

		}
		break;
		case 4:
		{
			/*Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа, которая возвращает количество дней для M-го месяца года Y (1 ≤ M ≤ 12, Y > 0 — целые числа).
			Вывести значение функции MonthDays для данного года Y и месяцев M1, M2, M3.
*/
			int year;
			cout << "Введите год" << endl;
			cin >> year;
			int Month;
			for (int i = 0; i < 3; i++)
			{
				cout << "Введите Месяц" << endl;
				cin >> Month;
				cout << "Колличество дней в месяце " << getCountDayMonth(Month, year) << endl;
			}
		}
		break;
		case 5:
		{
			/*Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y), которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y, 
			определяет предыдущую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными).
			Применить процедуру PrevDate к трем исходным датам и вывести полученные значения предыдущих дат
*/
			int year;
			cout << "Введите год" << endl;
			cin >> year;
			int Month;
			cout << "Введите Месяц" << endl;
			cin >> Month;
			int day;
			cout << "введите день" << endl;
			cin >> day;
		    getPrevDay(year, Month, day);
		}
		break;
		case 6:
		{
			/*Используя функцию MonthDays из задания 4, описать процедуру NextDate(D, M, Y), которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y, определяет следующую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными).
			Применить процедуру NextDate к трем исходным датам и вывести полученные значения следующих дат
*/
			int year;
			cout << "Введите год" << endl;
			cin >> year;
			int Month;
			cout << "Введите Месяц" << endl;
			cin >> Month;
			int day;
			cout << "введите день" << endl;
			cin >> day;
			getNextDay(year, Month, day);
		}
		break;
		case 7:
		{
			/*Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника, две другие стороны x и y которого известна
*/
			double x;
			cout << "Введите сторону трекгольник" << endl;
			cin >> x;
			double y;
			cout << "Введите сторону трекгольник" << endl;
			cin >> y;
			cout << "Гипотенуза равна " << c(x, y) << endl;
		}
		case 8:
		{
			/*Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2)
*/
		 double x1;
		 double x2;
		 double y1;
		 double y2;
		 cout << "Введите координату x1" << endl;
		 cin >> x1;
		 cout << "Введите координату x2" << endl;
		 cin >> x2;
		 cout << "Введите координату y1" << endl;
		 cin >> y1;
		 cout << "Введите координату y2" << endl;
		 cin >> y2;
		 cout << "Растоляние между точками= " << d(x1, y1, x2, y2) << endl;
		}
		break;
		case 9:
		{
		//	Напишите функцию int f(int m2, int m1, int m0), которая вычисляет и возвращает натуральное число, первая(сотни), вторая(десятки)
			//и третья(единицы) цифры которого равны соответственно m2, m1, m0
			int m2;
			cout << "Введите сотни" << endl;
			cin >> m2;
			int m1;
			cout << "Введите десятки" << endl;
			cin >> m1;
			int m0;
			cout << "Введите единицы" << endl;
			cin >> m0;
			cout << F(m2, m1, m0) << endl;
		}
		}
		
		cout << "Хотите продолжить ?" << endl;
		cout << "y-da   n-net" << endl;
		cin >> f;
	} while (f == 'y');

}

float ShiftRight3(float *A, float *B, float *C)
{
	float Temp;
	Temp = *B;
	*B = *A;
	*A = *C;
	*C = Temp;
	return 0;
}
float  coutABC(float A, float B, float C)
{
	cout << "A= "<< A << endl;
	cout << "B= " << B << endl;
	cout << "C= " << C << endl;
	return 0;
}
float ShiftLeft3(float *A, float *B, float *C)
{
	float Temp;
	Temp = *A;
	*A = *B;
	*B = *C;
	*C = Temp;
	return 0;
}

int IsLeapYear(int year)
{
	if (((year % 4) == 0) || (((year % 100) == 0) && ((year % 400) != 0)))
		return 1;

	return 0;
}

int getCountDayMonth(int month, int year)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		if (IsLeapYear(year))
			return 29;
		else
			return 28;
		break;
	default:
		return 0;
	}

}
int getPrevDay(int year, int month, int day)
{
	if (day == 1)
	{
		if (month == 1)
		{
			year--;
			month = 12;
			day = getCountDayMonth(year, month);
		}
		else
		{
			month--;
			day = getCountDayMonth(year, month);
		}
	}

	else
	{
		day--;
	}
	cout << "вчерашний день " << day << "." << month << "." << year <<endl;
	return 0;
}
int getNextDay(int god, int month, int day)
{
	if (day == getCountDayMonth(god, month))
	{
		if (month == 12)
		{
			god++;
			month = 1;
		}
		else
		{
			month++;
		}
		day = 1;
	}
	else
	{
		day++;
	}
	cout << "Завтрашний день " << day << "." << month << "." << god << endl;
	return 0;
}
double c(double x, double y)
{
	double c = sqrt(x*x + y*y);

	return c;
}
double d(double x1, double y1, double x2, double y2)
{
	double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	return d;
}
int F(int m2, int m1, int m0)
{
	int F = m2 + m1 + m0;

	return F;
}