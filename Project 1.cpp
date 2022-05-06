

#include <iostream>
#include<ctime>
#include<time.h>
#include<random>
using namespace std;

//void exito(int a)
//{
 //   cout << "Have a nice day!";
 //   exit(0);
  //  return ;
//}


class Id
{
public:

    int count;
    int Idp()
    {
        count++;
        id = count;
        cout << "id:" << id << endl;
        return id;
    }
    int GetId()
    {
        return id;
    }
private:
    int id;
};


class Delete
{
public:
    string DeleteName()
    {
        //cout << "Ener your name" << "\t";
       string name="user";
        //cin >> name;
        return name;
    };
};


    class Dannue
    {
    public:
        string GetName()
        {
            cout << "Enter your name" << "\t";
            string name;
            cin >> name;
            return name;
        };

        string GetSurName()
        {
            cout << "Enter your surname" << "\t";
            string surname;
            cin >> surname;
            return surname;
        };

        int GetAge()
        {
            cout << "Enter your age" << "\t";
            int age;
            cin >> age;
            return age;
        };




    };

    void menu()
    {
        setlocale(LC_ALL, "ru");
        int *pa{};
        int b;
        cin >> b;
        int b = *pa;
        cout << "Выберите действие: " << endl
            << "(0) Выход из программы " << endl
            << "(1) Ввод данных " << endl      
            << "(2) Удаление " << endl
            << "(3) Добавление " << endl
            
            << "Ваш выбор: ";

       // cin >> *pa;
       
           

        

        switch (*pa)
        {
        default:
            int a;
            cout << "Check number" << endl;
            cin >> a;

     
           if (int a = 0)
           {
                cout << "Exit ";
               
                return;
                
            }
            break;

           // break;
       

            if (int a = 1)
            {
                //default:
                Dannue dt;
                dt.GetName();

                Dannue fr;
                fr.GetSurName();

                Dannue dh;
                dh.GetAge();
               // break;
            }

            if (a == 2)
            {
                Delete df;
                df.DeleteName();
            }

       
            if ( int a = 3)
            {
                Id fr;
                fr.GetId();
            }


            break;
        }
    }

    void main()
    {
        
        menu();



       

        


        return;
    }




