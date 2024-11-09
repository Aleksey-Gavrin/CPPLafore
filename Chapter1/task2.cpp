/*Задача 2:
    Напишите программу, выводящую следующую таблицу:

    1990      135
    1991     7290
    1992    11300
    1993    16200

    В программе использовать только один оператор cout.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << 1990 << setw(8) << 135 << endl
    << 1991 << setw(8) << 7290 << endl
    << 1992 << setw(8) << 11300 << endl
    << 1993 << setw(8) << 16200 << endl;

    return 0;
}