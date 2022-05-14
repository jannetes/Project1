#include<iostream>
#include <fstream>
#include <ctime>
#include "stdlib.h"
#include<time.h>
#include<random>
#include<iostream>

using namespace std;


void YourId()
{
	srand(time(NULL));
	int c = rand() % 9999 + 100000;
	cout << "id:" << c << endl;

	return;
}


void DannueEntry()
{
	setlocale(LC_ALL, "rus");
	char name;
	char _surname;
	char name3;
	int age;

	int size = 1;
	cout << "Введите количество пользователей (число): ";
	cin >> size;
	 const int* pa = &size;


	for (int i = 0; i < size; i++)
	{
		cout << "Введите имя: ";
		cin >> name;
		const char* pb = &name;


		cout << "Введите Фамилию: ";
		cin >> _surname;
		const char* pc = &_surname;

		cout << "Введите отчество: ";
		cin >> name3;
		const char* pd = &name3;

		cout << "Введите возраст: ";

		cin >> age;
		const int* pe = &age;

		YourId();

		cout << "_____________________________________" << endl;
	}
	return;

}




void  DannueChange()
{
	int _n;
	cout << "Введите номер пользователя (число): ";
	cin >> _n;
	_n--;
	char name;
	char _surname;
	char name3;
	int age;
	//int f = 0;
	//for (int i = 0; i <= _n; i++)
	//{

		//cout << *pa << endl;
	cout << "Введите ФИО: ";
	cin >> name;
	cin >> _surname;
	cin >> name3;

	cout << "Введите возраст: ";
	cin >> age;

	cout << "Данные изменены!" << endl;
	system("pause");
	//}



	//if (_n >= 0 && _n < f)
	//{
		//cout << "Введите Вашу фамилию ";
		//cin >> _surname;
		//cout << "Введите Ваше имя ";
		//cin >> name;
		//cout << "Введите Ваше отчество ";
	//	cin >> name3;

		//cout << "Введите возраст: ";
		//cin >> age;

		//system("pause");
		//cout << "Данные изменены!" << endl;
	//}
	//else
		//cout << "Номер введен не верно!" << endl;

}

void PrintS()
{


	int _n;
	cout << "Введите номер пользователя(число)" << endl;
	cin >> _n;
	char name;
	char _surname;
	char name3;
	int age;
	char* pb = &name;
	char* pc = &_surname;
	char* pd = &name3;
    int* pe = &age;


	//_n--;


	for (int i = 0; i < _n; i++)
	{
		cout << "Данные № " << i + 1 << ":" << endl;

		cout << "ФИО: " << (&pb) << "\t " << (&pc) << "\t " << (&pd) << endl;
		cout << "Возраст: " << (&pe) << endl;




		cout << "_____________________________________" << endl;
	}


};


void Print()
{
	void(*fooPointer)();
	fooPointer = PrintS;
	fooPointer();
}
void DeleteDannue()
{
	char* arr = new char[10];
	int* arrC = new int[10];
	delete[] arr;
	delete[] arrC;
	cout << "Данные удалены" << endl;

}

int  janet;
void Menu()
{
	cout << "Выберите действие: " << endl
		<< "(0) Выход из программы " << endl
		<< "(1) Ввод данных " << endl
		<< "(2) Вывод " << endl
		<< "(3) Изменение " << endl
		<< "(4) Удаление " << endl;

	cout << "Ваш выбор: ";
	cin >> janet;
}
inline void Vuvod()
{
	setlocale(LC_ALL, "rus");
	Menu();

	while (janet != 0)
	{

		switch (janet)
		{
		case 1:


			if (janet == 1)
			{
				DannueEntry();
			}
			system("pause");
			system("cls");
			Menu();
			break;

		case 2:

			if (janet == 2)
			{

				Print();
			}
			else
				cout << "Данные пусты! " << endl;



			system("pause");
			system("cls");
			Menu();
			break;

		case 3:


			if (janet == 3)
			{
				DannueChange();
			}
			else
				cout << "Данные пусты! " << endl;

			system("pause");
			system("cls");
			Menu();
			break;

		case 4:

			if (janet == 4)
			{
				DeleteDannue();
			}
			else
				cout << "Данные пусты! " << endl;
			system("pause");
			system("cls");
			Menu();
			break;




		default:
			cout << "Неверно введен номер действия!" << endl;
			system("pause");
			system("cls");
			Menu();
			break;

		}

		system("cls");



		system("pause");
	}
}

int main()
{
	setlocale(LC_ALL, "rus");




	Vuvod();
}


