#include <iostream>
#include "Fraction.h"
#include "Set.h"

using namespace std;

int main() {
    Fraction fraction1(10, 2);

    fraction1 - 5;
    5 - fraction1;


    Set set1;
    set1 = set1 + 1 + 2 + 3 + 3;
    cout << "Set 1: " << set1 << endl;

    Set set2;
    set2 = set2 + 2 + 3 + 4 + 5;

    cout << "Set 2: " << set2 << endl;

    cout << "Set 1 u 2: " << set1 + set2 << endl;
}