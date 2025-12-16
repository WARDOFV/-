#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const string filename = "numbers.txt";

    ifstream ifs(filename);
    if (!ifs) {
        cout << "net " << endl;
        return 1;
    }

    int number;
    int sum = 0;

    while (ifs >> number) {
        if (number % 2 == 0) {
            sum += number;
        }
    }

    cout << "symma chetnih " << sum << endl;

    ifs.close();

    return 0;
}
