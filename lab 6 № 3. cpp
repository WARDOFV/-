#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    const string filename = "numbers2.txt";

    ifstream ifs(filename);
    if (!ifs) {
        cout << "Не удалось открыть файл" << endl;
        return 1;
    }

    int number;
    int min_positive = numeric_limits<int>::max();

    while (ifs >> number) {
        if (number > 0 && number < min_positive) {
            min_positive = number;
        }
    }

    cout << "Минимальное положительное число: " << min_positive << endl;
    ifs.close();

    return 0;
}
