#pragma once

#ifndef SET_H
#define SET_H

#include <vector>
#include <ostream>

using namespace std;

class Set {
private:
    vector<int> vec;
public:
    Set() = default;
    Set(Set const &set);
    Set& operator=(const Set &other);
    Set operator+(const int &number) const;
    Set operator+(const Set &other) const;
    friend ostream &operator<<(ostream &os, const Set &set);
};

#endif
