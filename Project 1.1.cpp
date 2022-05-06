

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

    string DeleteSurName()
    {
        //cout << "Enter your surname" << "\t";
        string surname="user";
       
        return surname;
    };

    int DeleteAge()
    {
        //cout << "Enter your age" << "\t";
        int age=0;
        //cin >> age;
        return age;
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
    class TFoo
    {
        int value;
    public:
        int ValueGet()
        { 
            return value;
        }
        void ValueSet(int v) 
        { 
            value = v; 
        }
    };

    void menu()

    {
        TFoo  a;
       // int& get_value(*a);
        
       
        setlocale(LC_ALL, "ru");
        //int *a;
        
        cout << "Выберите действие: " << endl
            << "(0) Выход из программы " << endl
            << "(1) Ввод данных " << endl      
            << "(2) Удаление " << endl
            << "(3) Сгенерировать id: " << endl
            
            << "Ваш выбор: ";
        TFoo b;
        //cin >> b;
        b = *&a;
       // cin >> *pa;
       
           

        

        switch (0 )
        {
        default:
            int *a;
            cout << "Check number" << endl;
            cin >> *a;

     
           if (int *a = 0)
           {
                cout << "Exit ";
               
                return;
                
            }
            break;

           // break;
       

            if ( *a = 1)
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

            if (*a = 2)
            {
                Delete df;
                df.DeleteName();

                Delete s;
                s.DeleteSurName();

                Delete e;
                e.DeleteAge();
            }

       
            if ( *a = 3)
            {
                Id fr;
                fr.GetId();
            }


            break;
        }
    }

    void main()
    {
        

        menu( );
        return;
    }




