#include "Header.h"

int main()
{
    setlocale(LC_ALL, "ru");
    float distance, time;
    cout << "Вычисление скорости" << endl;
    cout << "--------------------------------" << endl;
    cout << "Введите расстояние до аэропорта (км): ";
    cin >> distance;

    cout << "Введите время, за которое нужно доехать (часы): ";
    cin >> time;

    float speed = distance / time;

    cout << "Чтобы вовремя доехать, нужно ехать со скоростью " << speed << " км/ч." << endl;
    cout << "--------------------------------" << endl;
    return 0;
    
}
