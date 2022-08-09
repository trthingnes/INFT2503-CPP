#include <iostream>
#include <fstream>

using namespace std;

const string path = "tallfil.dat";

void read_temperatures(double temperatures[], int length);

int main() {
    const int size = 5;
    double temperatures[size];

    read_temperatures(temperatures, size);

    int low = 0, mid = 0, high = 0;
    double temp;

    for (int i = 0; i < size; i++) {
        temp = temperatures[i];

        if (temp < 10) {
            low++;
        }
        else if (temp > 20) {
            high++;
        }
        else {
            mid++;
        }
    }

    cout << "Filen inneholder " << low << " lav(e), " << mid << " middels og " << high << " høy(e) temperaturer." << endl;
}

void read_temperatures(double temperatures[], int length) {
    ifstream file;
    file.open(path);

    if (!file) {
        cerr << "Fikk ikke åpnet filen" << endl;
        exit(EXIT_FAILURE);
    }

    double temp;
    for (int i = 0; i < length && file >> temp; i++) {
        temperatures[i] = temp;
    }

    file.close();
}