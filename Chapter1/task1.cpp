/*Задача 1:
    Считая, что кубический фут равен 7,481 галлона, написать программу, запрашивающую у пользователя число галлонов и выводящую на экран эквива -
    лентный объем в кубических футах.
*/

#include <iostream>
using namespace std;

int main(void)
{
        cout << "Введите число галлонов: ";
        int gal_number;
        cin >> gal_number;
        double const MULTIPLIER = 7.481;
        double cubic_foot_vol = gal_number * MULTIPLIER;
        cout << "Объем в кубических футах: ";
        cout << cubic_foot_vol << endl;

    return 0;
}