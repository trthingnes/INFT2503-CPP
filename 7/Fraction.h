#pragma once

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
    int numerator;
    int denominator;

    Fraction();
    Fraction(int numerator, int denominator);
    void set(int numerator_, int denominator_ = 1);
    Fraction operator+(const Fraction &other) const;
    Fraction operator-(const Fraction &other) const;
    Fraction operator-(const int &other) const;
    Fraction operator*(const Fraction &other) const;
    Fraction operator/(const Fraction &other) const;
    Fraction operator-() const;
    Fraction &operator++();
    Fraction &operator--();
    Fraction &operator+=(const Fraction &other);
    Fraction &operator-=(const Fraction &other);
    Fraction &operator*=(const Fraction &other);
    Fraction &operator/=(const Fraction &other);
    Fraction &operator=(const Fraction &other);
    bool operator==(const Fraction &other) const;
    bool operator!=(const Fraction &other) const;
    bool operator<=(const Fraction &other) const;
    bool operator>=(const Fraction &other) const;
    bool operator<(const Fraction &other) const;
    bool operator>(const Fraction &other) const;
    friend Fraction operator-(const int &i, const Fraction &f);
private:
    void reduce();
    int compare(const Fraction &other) const;
};

#endif
