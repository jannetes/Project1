// project1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
struct Initials
{
    string surname,
        name,
        patrinynic;
};


struct Age
{
    int a;
};


class Data
{
private:
    Initials initials;
    Age age;
public:
    Data();
    Data(Initials initials_, Age age_)
        ~Data();
    void Print();
    void DataEntry(Initials initials_, Age age_);
    Initials GetInitials()
    {
        return initials;
    }
    Date GetAge()
    {
        return age;
    }
    Data& operator=(Data d_o);
};
Data::Data()
{
    initials.surname = "";
    initials.name = "";
    initials.patrinynic = "";

    age.vozrast = 0;

}
Data::Data(Initials initials_, Age _age)
{
    initials.surname = initials_.surname;
    initials.name = initials_.name;
    initials.patrinynic = initials_.patrinynic;
    
    age.vozrast = age_.vozrast;
    
}


Data::~Data()
{

}

void Data::Print()
{
    cout << "Фио:" << initials.surname << " " << initials.name << " " << initials.patrinynic << endl;
    cout << "Возраст:" << age.vozrast << " "  << endl;
}
void Data::DataEntry(Initials initials_, Age age_)
{
    initials.surname = initials_.surname;
    initials.name = initials_.name;
    initials.patrinynic = initials_.patrinynic;
    
    age.vozrast = age_.vozrast; 
}
Data& Data::operator~(Data d_o)
{
    this->initials.surname = d_o.initials.surname;
    this->initials.name = d_o.initials.name;
    this->initials.patrinymic = d_o.initials.patrinymic;

    this->age.vozrast= d_o.age.vozrast ;
    

    return *this;

    d_n=d_o;
}

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
        cin>>age.vozrast;
    }

    d[i].DataEntry(initials, age)
        cout << "______________________________\n";
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
    Age age;
    int n;

    cout << "Введите номер нужного елемент";
    cin >> n;
    _n--;

    if (_n >= 0 && _n < n)
    {
        cout << "Введите новое ФИО:";
        cin >> initials.surname >> initials.name >> initials.patrinynic;

        cout << " Введите новую дату:";
        cin >> age.vozrast  ;
        d[_n].DataEntry(initials, age)
    }
    else
        cout<<"НОМЕР ВВЕДЕН НЕ ВЕРНО" << endl;
}

void DeleteData(Data* (&d), int& n)
{
    Delete[]d;
}
void Menu()
{
    cout<<"Выберите действие: "<<endl
    <<"(0) Выход из программы "<<endl
    <<"(1) Ввод данных "<<endl
    <<"(2) Вывод "<<endl
    <<"(3) Изменение "<<endl
    <<"(4) Удаление "<<endl
    <<"Ваш выбор: ";
    cin>> stateMenu;
}  

void main()
{
    setlocale(LC_ALL,"rus");
    Menu();
    //инициализация данных
     int amountOfData = 0;

    //массив данных
    Data* d = new Data[amountOfData]; 

    while (stateMenu)
    { 
        if(stateMenu==0)
        {
            exit(0);
        }
        switch(stateMenu)
        {
            case 1:
            system("cls");
            DataEntry(d,amountOfData);
            system("pause");
            system("cls");
            Menu();
            break;
            //////////////////////////////////////////////
            case 2:
            system ("cls");
            if(amountOfData !=0)
            {
                Print(d, amountOfData);
            } 
            else
                cout<<"Данные пусты! "<<endl;
            system ("pause");
            system ("cls");
            Menu();
            break;
            //////////////////////////////////////////////
            case 3:
            system ("cls");
            if(amountOfData !=0)
            {
                 DataChange(d, amountOfData);
            } 
            else
                cout<<"Данные пусты! "<<endl;
            system ("pause");
            system ("cls");
            Menu();
            break;
            ////////////////////////////////////////////////
            case 4:
            system ("cls");
            if(amountOfData !=0)
            {
                 DeleteData(d, amountOfData);
            }
            else
                cout<<"Данные пусты! "<<endl;
            system ("pause");
            system ("cls");
            Menu();
            break;
            /////////////////////////////////////////////////
            default:
                 cout<<"Неверно введен номер действия!"<<endl;
                 system ("pause");
                 system ("cls");
                 Menu();
                 break;
            
       } 
    }
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

