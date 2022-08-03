#include <iostream>
#include "Set.h"

using namespace std;

Set::Set(Set const &old) {
    *this = old;
}

Set& Set::operator=(const Set &other) {
    vec.clear();

    for (auto number : other.vec) {
        vec.emplace_back(number);
    }

    return *this;
}

Set Set::operator+(const int &number) const {
    Set result = *this;

    if (none_of(vec.begin(), vec.end(), [&](const auto &item) {
        return item == number;
    })) { result.vec.emplace_back(number); }

    return result;
}

Set Set::operator+(const Set &other) const {
    Set result;

    result = *this;

    for (auto number : other.vec) {
        result = result + number;
    }

    return result;
}

ostream &operator<<(ostream &os, const Set &set) {
    os << "{ ";

    for (auto number : set.vec) {
        os << number << " ";
    }

    os << "}";
    return os;
}
