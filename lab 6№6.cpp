#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");

    ifstream file("numbers.bin", ios::binary);

    if (!file) 
    {
        cerr << "Ошибка: не удалось открыть файл data.bin" << endl;
        return 1;
    }

    int number; //Временная переменная для считывания одного числа из файла
    int min_positive = INT_MAX; //Хранит минимальное положительное число
    bool found = false; //Флаг: нашли ли хотя бы одно положительное число

    while (file.read(reinterpret_cast<char*>(&number), sizeof(int))) 
    {
        if (number > 0) 
        {
            found = true;
            if (number < min_positive) 
            {
                min_positive = number;
            }
        }
    }

    file.close();

    if (found) 
    {
        cout << "Минимальное положительное число: " << min_positive << endl;
    }
    else 
    {
        cout << "В файле нет положительных чисел." << endl;
    }

    return 0;
} 
