#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	int n, m;
	cout << "dai koll chisla chto ti hocheh"<<"--";
	cin >> n;
	cout << endl;

	ofstream file("jdsaf.txt");
	if (!file) {
		cout << "net";
		return 1;
	}
    
	
    for (int i = 0; i <= n; i++) {
		file << (i+1) * 2;
        if (i != n - 1) {
            file << " ";
        }
	}
    file.close();
    
    
    cout << "dai m ";
    cin >> m;

    ifstream gfile("jdsaf.txt");
    if (!gfile.is_open()) {
        cout << "net" << endl;
        return 1;
    }

   

    int number;
    int count = 0;
    for (int i = 0; i < m; i++) {
        if (gfile >> number) {
            cout << number << " ";
            count++;
        }
        else {
            cout << "net" << endl;
            break;
        }
    }
    if (count == m) {
        cout << endl << "good" << m << " чисел." << endl;
    }
    else {
        cout << "bad " << count << " чисел." << endl;
    }

    gfile.close();
    return 0;
}
