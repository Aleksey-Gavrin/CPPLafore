/*Задача 8:
Когда размер величины, выводимой на экран с помощью манипулятора setw(), оказывается меньше размера зарезервированного поля, по умолчанию
незаполненные поля заполняются пробелами. Манипулятор setfill() принимает в качестве аргумента один символ, который замещает все пробелы
на незаполненных позициях поля. Модифицируйте пример WIDTH так, чтобы символы, разделяющие пары значений из столбцов, были не пробелами, а
точками, например

Москва..........8425785
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    long pop1 = 8425785, pop2 = 47, pop3 = 9761;

    cout << setw(10) << left << "City" << setw(12) << right << "Population" << endl
         << setw(10) << setfill('.') << left << "Moscow" << setw(12) << right << pop1 << endl
         << setw(10) << left << "Kirov" << setw(12) << right << pop2 << endl
         << setw(10) << left << "Ugryumovka" << setw(12) << right << pop3 << endl << endl;

    return 0;
}