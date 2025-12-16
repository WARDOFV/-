#include <fstream>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int number;

    // Открываем для записи и чтения в бинарном режиме
    fstream file_f("numbers3.txt", ios::in | ios::out | ios::binary);

    if (!file_f) {
        cerr << "Не удалось открыть файл" << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {            // Заполнение файлa числами от 1 до n
        file_f.write((char*)&i, sizeof(i));
    }

    file_f.seekg(0, ios::beg);

    int sum1 = 0;
    while (file_f.read((char*)&number, sizeof(number))) {
        if (number % 2 == 0) {
            sum1 += number;
        }
    }

    cout << "сумма четных чисел: " << sum1 << endl;

    file_f.close();
    return 0;
}
