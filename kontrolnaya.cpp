

#include <iostream>
using namespace std;

 int main()
  {
      setlocale(LC_ALL, "Russian");

      cout << "Введите количествo чисел: " << endl;
      int size;
      cin >> size;

      int* a = new int[size];

      cout << "Введите числа: " << endl;
      for (int i = 0; i < size; i++)
      {
        cin >> a[i];
      }
 
      int min = a[0];

       for (int i = 1; i < size; i++)

       {

         if (min > a[i])

         {

          min = a[i];

         }

       }

 cout << "Минимальный элемент массива: " << min;

  }
