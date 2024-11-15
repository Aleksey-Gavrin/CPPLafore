/*Задача 9:
Две дроби a/b и c/d можно сложить следующим образом:
a/b + c/d = (a*d + b*c)/(b*d)
Например, 1/4 + 2/3 = (1*3 + 4*2)/(4*3) = 11/12
Напишите программу, запрашивающую у пользователя значения двух дробей, а затем выводящую результат, также записанный в форме дроби.
Взаимодействие программы с пользователем может выглядеть, например, следующим образом:
-- Введите первую дробь: 1/2
-- Введите вторую дробь: 2/5
-- Сумма равна: 9/10
Вы можете использовать тот факт, что операция извлечения >> может считывать более одного значения за раз:
-- cin >> a >> dummy_char >> b;
*/

#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;
    int sum_nominator, sum_denominator;
    char dummy_char;

    cout << "Введите первую дробь:" << endl;
    cin >> a >> dummy_char >> b;
    cout << "Введите вторую дробь:" << endl;
    cin >> c >> dummy_char >> d;

    sum_nominator = (a*d + b*c);
    sum_denominator = (b*d);

    cout << "Сумма равна: " << sum_nominator << '/' << sum_denominator << endl;

    return 0;
}