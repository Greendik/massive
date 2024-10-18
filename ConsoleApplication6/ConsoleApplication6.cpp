#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>
#include "Gurina.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[4] = { 1, 2, 3, 4 };
    float sum = _arr_sum(arr, sizeof(arr) / sizeof(arr[0]));
    int th = 100;
    cout << "Сумма массива: " << _arr_sum(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Вычитание из массива: " << _arr_min(arr, sum, th) << endl;
    cout << "Умножение массива: " << _arr_umn(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Количество чисел, которые делятся на 3: " << _arr_del(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Максимум в массиве: " << _arr_maxim(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Минимум в массиве: " << _arr_minim(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Количество чётных в массиве: " << _arr_chet(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Количество нечётных в массиве: " << _arr_nechet(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    return 0;
}
