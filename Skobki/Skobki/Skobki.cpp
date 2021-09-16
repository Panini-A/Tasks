
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int count1=0, count2=0;
    string str;
    cout << "Введите выражение со скобками: ";
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(')
            count1++;
        else if (str[i] == ')') {
            count2++;
            if (count1 == 0) {
                cout << "Ошибка! Введена некорректная скобка" << endl;
                exit(1);
            }
        }
    }
    if (count1 == count2)
        cout << "Все ок! Введено корректное выражение" << endl;
    else cout << "Ошибка! Скобки расставлены НЕкорректно" << endl;
}


