/*Задача 6:
На биржевых торгах за 1 фунт стерлингов давали $1.487, за франк - $0.172, за немецкую марку - $0.584, а за японскую йену - $0.00955.
Напишите программу, которая запрашивает денежную сумму в долларах, а затем выводит эквивалентные суммы в других валютах.
*/

#include <iostream>
using namespace std;

int main() {

    double sum_usd, sum_pound, sum_franc, sum_mark, sum_yen;

    cout << "Введите сумму в долларах США: " << endl;
    cin >> sum_usd;

    sum_pound = sum_usd / 1.487;
    sum_franc = sum_usd / 0.172;
    sum_mark = sum_usd / 0.584;
    sum_yen = sum_usd / 0.00955;

    cout << "Эквивалентные суммы в валютах:" << endl
        << "фунтов стерлингов: " << sum_pound << endl
        << "франков :" << sum_franc << endl
        << "немецких марок: " << sum_mark << endl
        << "японских йен: " << sum_yen << endl << endl;

    return 0;
}