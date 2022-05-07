// project1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;
struct Initials
{
    string surname,
        name,
        patrinynic;
};


struct Date
{
    int day,
        month,
        year;
};


class Data
{
private:
    Initials initials;
    Date date;
public:
    Data();
    Data(Initials initials_, Date date_)
        ~Data();
    void Print();
    void DataEntry(Initials initials_, Data date_);
    Initials GetInitials()
    {
        return initials;
    }
    Date GetDate()
    {
        return date;
    }
    Data& operator=(Data d_o);
};
Data::Data()
{
    initials.surname = "";
    initials.name = "";
    initials.patrinynic = "";

    date.day = 0;
    date.month = 0;
    date.year = 0;

}
Data::Data(Initials initials_, Date date_)
{
    initials.surname = initials_.surname;
    initials.name = initials_.name;
    initials.patrinynic = initials_.patrinynic;

    date.day = date.day;
    date.month = date.month;
    date.year = date.year;
}


Data::~Data()
{

}

void Data::Print()
{
    cout << "Фио:" << initials.surname << " " << initials.name << " " << initials.patrinynic << endl;
    cout << "Дата:" << date.day << " " << date.month << " " << date.year << endl;
}

void Data::Print()
{
    initials.surname = initials_.surname;
    initials.name = initials_.name;
    initials.patrinynic = initials_.patrinynic;

    date.day = date.day;
    date.month = date.month;
    date.year = date.year;
}

Data& Data::operator~(Data d_o)
{
    this->initials.surname = d_o.initials.surname;
    this->initials.name = d_o.initials.name;
    this->initials.patrinymic = d_o.initials.patrinymic;

    this->date.day = d_o.date.day;
    this->date.month = d_o.date.month;
    this->date.year = d_o.date.year;

    return *this;

    //d_n = d_o;
}

void DataEntry(Data* (&d), int& n);
void DataReading(Data* (&d), int& n, string filename);
void Print(Data* d, int n);
void DataChange(Data* d, int n);
void DeleteData(Data* (&d), int& n);

void DataEntry(Data* (&d), int& n)
{
    Initials initials;
    Data date;

    cout << "Введите размер массива";
    cin >> n;
    d = new Data[n];

    for (int i = 0; i < n; i++)
    {
        cout << "";
        cin>> initials.surname >>  initials.name >> initials.patrinynic;

        cout << "";
        cin>> date.day>> date.month >> date.year;
    }

    d[i].DataEntry(initials, date)
        cout << "______________________________\n";
}

void DataReading(Data* (&d), int& n, string filename)
{
    ifstream reading(filename);

    if (reading)
    {
        Initials initials;
        Data date;
        reading >> n;


        d = new data[n];

        for (int i = 0; i < n; i++)
        {
            reading>> initials.surname >> initials.name >> initials.patrinynic;
            reading>> date.day >> date.month >> date.year;

            d[i].DataEntry(initials, date);
        }
        cout << "Данные считаны!" << endl;

    }
    else
        cout << "Ошибка открытия файла" << endl;


    reading.close();

}


void Print(Data* (&d), int& n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Данные №" << i + 1 << endl;

        d[i].Print();
        cout << "_______________________________\n";
    }
}

void DataChange(Data* d, int n)
{
    Initials initials;
    Data date;
    int n;

    cout << "Введите номер нужного елемент";
    cin >> n;
    _n--;

    if (_n >= 0 && _n < n)
    {
        cout << "Введите новое ФИО:";
        cin >> initials.surname >> initials.name >> initials.patrinynic;

        cout << " Введите новую дату:";
        cin >> date.day >> date.month >> date.year;
        d[_n].DataEntry(initials, date)
    }
    else
        cout<<"НОМЕР ВВЕДЕН НЕ ВЕРНО" << endl;
}

void DeleteData(Data* (&d), int& n)
{
    int _n;
    Data* buf = new DAta[n];

    cout << "Введите номер нужного елемента (от 1  до"<<n<<"):";
    cin >> _n;
    _n--;


    if (n >= 0 && _n < n)
    {
        d = new Data[n];
        for (int i = 0; i <= n; i++)
        {

            if (i != _n)
            {
                d[q] = buf[i];
                q++;
            }
        }
        cout << "Данные удалены!" << endl;
    }
    else
        cout << "Номер введен неверно!" << endl;
  

    delete[]buf;
}

///////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
int _stateMenu;
void Menu()
{

    cout << "Выберите действие: " << endl
        << "(0) Выход из программы " << endl
        << "(1) Ввод данных " << endl
        << "(2) Изменение данных " << endl
        << "(3) Удаление данных" << endl
        << "Ваш выбор:";
    cin >> _stateMenu;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Menu();
    int _actions;
    string fileName;
    int _size = 0;
     Data * d = new Data[_size];
    while (_stateMenu != 0) 
    {
        switch (_stateMenu)
        {
        case 1:
            system("cls");
            cout << "Ввести данные вручную или читать из файла?";

            system("cls");

            if (_actions == 1)
            {
                DataEntry(d, _size);
            }
            else
            {
               DataReading(d, _size, "Input.txt");

            }
            system("pause");
            system("cls");
            Menu();
            break;

        case 2:
            system("cls");
            if (_size != 0)
            {
                Print(d, _size);
            }
            else
            
                cout << "Данные пусты!" << endl;
               
            system("pause");
            system("cls");
            Menu();
            break;


        case 3:
            system("cls");

            if (_size != 0)
            {
                DataChange(d, _size);

            }
            else
                cout << "Данные пусты" << endl;

            system("pause");
            system("cls");
            Menu();
            break;
        case 4:
            system("cls");
            if (_size != 0)
                DeleteData(d, _size);
            else
                cout << "Данные пусты!" << endl;

            system("pause");
            system("cls");
            Menu();
            break;
        }

    }


  
    system("cls");
    cout << "Работа завершена" << endl;
    system("pause");
}

