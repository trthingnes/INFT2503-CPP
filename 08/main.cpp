#include <cmath>
#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "in generic equal" << endl;
    return a == b;
}

bool equal(double a, double b) {
    cout << "in double equal" << endl;
    return abs(a - b) < 0.00001;
}

template <typename A, typename B>
class Pair {
public:
    A first;
    B second;
    Pair(A first_, B second_) : first(first_), second(second_) {}
    Pair operator+(const Pair &other) const {
        return Pair(first + other.first, second + other.second);
    }
    bool operator>(const Pair &other) const {
        return first + static_cast<A>(second) > other.first + static_cast<A>(other.second);
    }
};

int main() {
    cout << equal("abc", "abc") << endl;
    cout << equal("abc", "bcd") << endl;
    cout << equal(1.0, 1.0) << endl;
    cout << equal(1.0, 2.0) << endl;

    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    if (p1 > p2)
        cout << "p1 er størst" << endl;
    else
        cout << "p2 er størst" << endl;

    auto sum = p1 + p2;
    cout << "Sum: " << sum.first << ", " << sum.second << endl;
}