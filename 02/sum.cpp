#include <iostream>

using namespace std;

int find_sum(const int *table, int length);

int main() {
    int table[20];
    for (auto i = 0; i < 20; i++) {
        table[i] = i + 1;
    }

    cout << "10 første: " << find_sum(table, 10) << endl;
    cout << "5 neste: " << find_sum(table + 10, 5) << endl;
    cout << "5 siste: " << find_sum(table + 15, 5) << endl;
}

int find_sum(const int *table, int length) {
    long sum = 0;

    for (auto i = 0; i < length; i++) {
        sum += table[i];
    }

    return sum;
}