#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> vec = { 1.2, 2.3, 3.4, 4.5, 5.6 };
    cout << vec.front() << endl << vec.back() << endl;

    vec.emplace(vec.begin() + 1, 2.2);
    cout << vec.front() << endl;

    if(find(vec.begin(), vec.end(), 2.2) != vec.end) {
        cout << "Fant 2.2 i listen!" << endl;
    }
}