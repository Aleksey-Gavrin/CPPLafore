/*Задача 3:
Напишите программу, генерирующую следующий вывод:

10
20
19

Используйте представление числа 10 в виде целой константы. Для вывода числа 20 воспользуйтесь одной из арифметический операций с присваиванием, а
для вывода числа 19 - операцией декремента.
*/

#include <iostream>
using namespace std;

int main()
{
    int ten = 10;
    cout << ten << endl;
    ten *= 2;
    cout << ten << endl
    << --ten << endl;
    return 0;
}