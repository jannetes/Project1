

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

    class Menu
    {
    public:
       
        void menu()
        {
            int a;
            setlocale(LC_ALL, "ru");
            //int *a;
           // int b = 0;
           
     
           // b = a;
            cout << "Выберите действие: " << endl
                << "(0) Выход из программы " << endl
                << "(1) Ввод данных " << endl
                << "(2) Удаление " << endl
                //<< "(3)Генерация id " << endl

                << "Ваш выбор: ";
            //cin >> a;
            // cin >> *pa;
            return;
        }
        
      



   };
    class Swich: public Menu
    {
    public:
        void swich()
        {
            //menu();
            int c;
            cin >> c;

            switch (c)
            {
            case1:

                //int a;
                cout << "Check number" << endl;
                cin >> c;

           
            
                //if (int c = 0)
                //{
                   // cout << "Exit ";
                
                  //  return;

               // }else
                if (c == 1)
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
                else
                {
                    Delete df;
                    df.DeleteName();

                }
                   


                         


                break;
            }
            return;
        }
    };


    void main()
    {
        Menu d;
        d.menu();

        Id fr;
        fr.GetId();

        Swich ko;
        ko.Swich::swich();

        
        return;
    }




