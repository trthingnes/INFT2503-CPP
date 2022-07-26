#include <iostream>

using namespace std;

int main() {
    int i = 3, j = 5;
    int *p = &i, *q = &j;

    cout << "i: " << i << " &i: " << &i << endl;
    cout << "j: " << j << " &j: " << &j << endl;
    cout << "p: " << p << " &p: " << &p << endl;
    cout << "q: " << q << " &q: " << &q << endl;

    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    cout << *p << " " << *q << endl;
}