#include<iostream>
#include <fstream>
#include <ctime>
#include "stdlib.h"
#include<time.h>
#include<random>
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

	string name;
	string _surname;
	string name3;
	int _age;
	int n;

	cout << "Введите количество пользователей (число): ";
	cin >> n;


	
	for (int i = 0; i < n; i++)
	{
		cout << "Введите имя: ";
		cin >> name;


		cout << "Введите Фамилию: ";
		cin >> _surname;

		cout << "Введите отчество: ";
		cin >> name3;

		cout << "Введите возраст: ";

		cin >> _age;
		YourId();

		cout << "_____________________________________" << endl;
	}

}

void Print()
{
	DannueEntry();
	string name;
	string _surname;
	string name3;
	int _age = 0;
	int n = 0;
	int i = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "Данные № " << i + 1 << ":" << endl;

		cout << "ФИО: " << name << _surname << name3 << endl;
		cout << "Возраст: " << _age << endl;

		YourId();


		cout << "_____________________________________" << endl;
	}
}

void DannueChange()
{

	string name;
	string _surname;
	string name3;
	//int _age;
	int n = 0;

	int _n;
	cout << "Введите номер элемента, который хотите изменить (от 1 до " << n << "):";
	cin >> _n;
	_n--;



	for (int i = 0; i < n; i++)

	{
		cout << "ФИО: " << name << _surname << name3 << endl;
		cout << "Данные удалены!" << endl;
	}








}

void DeleteDannue()
{
	string name;
	string _surname;
	string name3;
	int _age;
	int n = 0;

	int c;

	int b = n - 1;
	cout << "Введите номер элемента, который хотите изменить (от 1 до " << n << "):";
	cin >> c;
	c--;



	if (n >= 0 && c < n)
	{
		cout << "Введите ФИО: ";
		cin >> name >> _surname >> name3;

		cout << "Введите возраст: ";
		cin >> _age;

		//system("pause");
		cout << "Данные изменены!" << endl;
	}
	else
		cout << "Номер введен не верно!" << endl;



}






int  s;
void Menu()
{
	cout << "Выберите действие: " << endl
		<< "(0) Выход из программы " << endl
		<< "(1) Ввод данных " << endl
		<< "(2) Вывод " << endl
		<< "(3) Изменение " << endl
		<< "(4) Удаление " << endl;
		
	cout << "Ваш выбор: ";
	cin >> s;
}
inline void Vuvod()
{
	setlocale(LC_ALL, "rus");
	Menu();

	int janet;
	cout << "Ваш выбор: ";
	cin >> janet;




	while (s != 0)
	{

		switch (s)
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

			if (janet != 0)
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


			if (janet != 0)
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

			if (janet != 0)
			{
				DeleteDannue();
			}
			else
				cout << "Данные пусты! " << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 5:
			if (janet != 0)
			{
				YourId();
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


		//cout << "Thanks for using" << endl;
		system("pause");
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	void DannueInitialization();

	Vuvod();
}
