/*Задача 12:
Напишите программу, выполняющую действия, обратные тем, которые описаны в упражнении 10, то есть запрашивающую у пользователя сумму,
указанную в десятичных фунтах, и переводящую её в старую систему фунтов, шиллингов и пенсов. Пример взаимодействия программы с пользователем
может выглядеть так:
-- Введите число десятичных фунтов: 3.51
-- Эквивалентная сумма в старой форме записи: J3.10.2
Обратите внимание на то, что если вам придется присваивать вещественное значение (например, 12,34) переменной целого типа, то его дробная
часть (0,34) будет потеряна, а целая переменная получит значение 12. Чтобы избежать предупреждения со стороны компилятора, используйте
явное преобразование типов. Можно использовать операторы, подобные приведенным ниже:
        float dec_pound;       //сумма в десятичных фунтах
        int pound;             //сумма в старых фунтах
        float dec_frac;         //десятичная дробная часть
        pound = static_cast<int>(dec_pound);   //отбрасывание дробной части
        dec_frac = dec_pound - pound;          //прибавление дробной части
Чтобы получить число шиллингов, следует умножить на 20 значение переменной dec_frac. Аналогичным образом можно получить число пенсов.
*/

#include <iostream>
using namespace std;

int main() {

    float dec_pound, dec_frac;
    int pound, shilling, pens;

    cout << "Введите число десятичных фунтов: ";
    cin >> dec_pound;
    pound = static_cast<int>(dec_pound);
    dec_frac = dec_pound - pound;
    shilling = static_cast<int>(dec_frac * 20);
    pens = static_cast<int>(dec_frac * 240) % 12;

    cout << "Эквивалентная сумма в старой форме записи: " << "J" << pound << "." << shilling << "." << pens << endl << endl;

    return 0;
}