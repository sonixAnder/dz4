#include "Header.h"

int main() 
{
    setlocale(LC_ALL, "ru");

    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Введите время начала использования скутера (часы, минуты, секунды. Пример: 10 0 0): ";
    cin >> h1 >> m1 >> s1;

    cout << "Введите время окончания использования скутера (часы, минуты, секунды. Пример: 11 0 0): ";
    cin >> h2 >> m2 >> s2;

    int totalTimeInSeconds = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
    int totalMinutes = totalTimeInSeconds / 60;
    int FinalAmount = totalMinutes * 2;

    cout << "Вам нужно будет заплатить: " << FinalAmount << " гривен." << endl;

    return 0;
}