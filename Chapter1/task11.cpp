/*Задача 11:
По умолчанию форматирование вывода производится по правому краю поля. Можно изменить форматирование текста на левостороннее путем
использования манипулятора setiosflags(ios::left) (не беспокойтесь о смысле новой формы записи, встретившейся в манипуляторе). Используйте
этот манипулятор вместе с setw() для того, чтобы произвести следующий вывод:

LastName        Name        Address         City
------------------------------------------------------------
Petrov          Vasiliy     Klenovaya 16    St.Petersburg
Ivanov          Sergey      Osinovaya 3     Nahodka
Sidorov         Ivan        Berezovaya 21   Kaliningrad
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << setw(10) << setiosflags(ios::left) << "LastName"
         << setw(10) << setiosflags(ios::left) << "Name"
         << setw(15) << setiosflags(ios::left) << "Address"
         << setw(15) << setiosflags(ios::left) << "City" << endl

         << "--------------------------------------------------" << endl

         << setw(10) << setiosflags(ios::left) << "Petrov"
         << setw(10) << setiosflags(ios::left) << "Vasiliy"
         << setw(15) << setiosflags(ios::left) << "Klenovaya 16"
         << setw(15) << setiosflags(ios::left) << "St.Petersburg" << endl

         << setw(10) << setiosflags(ios::left) << "Ivanov"
         << setw(10) << setiosflags(ios::left) << "Sergey"
         << setw(15) << setiosflags(ios::left) << "Osinovaya 3"
         << setw(15) << setiosflags(ios::left) << "Nahodka" << endl

         << setw(10) << setiosflags(ios::left) << "Sidorov"
         << setw(10) << setiosflags(ios::left) << "Ivan"
         << setw(15) << setiosflags(ios::left) << "Berezovaya 21"
         << setw(15) << setiosflags(ios::left) << "Kaliningrad" << endl << endl;

    return 0;
}