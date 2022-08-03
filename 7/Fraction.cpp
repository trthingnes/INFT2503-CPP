#include "Fraction.h"

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(const Fraction &fraction) {
    set(fraction.numerator, fraction.denominator);
}

Fraction::Fraction(int numberator, int denominator) {
    set(numberator, denominator);
}

void Fraction::set(int numberator_, int denominator_) {
    if (denominator_ != 0) {
        numerator = numberator_;
        denominator = denominator_;
        reduce();
    } else {
        throw "nevneren ble null";
    }
}

Fraction Fraction::operator+(const Fraction &other) const {
    Fraction fraction = *this;
    fraction += other;
    return fraction;
}

Fraction &Fraction::operator+=(const Fraction &other) {
    set(numerator * other.denominator + denominator * other.numerator, denominator * other.denominator);
    return *this;
}

Fraction &Fraction::operator++() {
    numerator += denominator;
    return *this;
}

Fraction Fraction::operator-(const Fraction &other) const {
    Fraction fraction = *this;
    fraction -= other;
    return fraction;
}

Fraction Fraction::operator-(const int &other) const {
    return {numerator - (other * denominator), denominator};
}

Fraction &Fraction::operator-=(const Fraction &other) {
    set(numerator * other.denominator - denominator * other.numerator, denominator * other.denominator);
    return *this;
}

Fraction &Fraction::operator--() {
    numerator -= denominator;
    return *this;
}

Fraction Fraction::operator-() const {
    Fraction fraction;
    fraction.numerator = -numerator;
    fraction.denominator = denominator;
    return fraction;
}

Fraction Fraction::operator*(const Fraction &other) const {
    Fraction fraction = *this;
    fraction *= other;
    return fraction;
}

Fraction &Fraction::operator*=(const Fraction &other) {
    set(numerator * other.numerator, denominator * other.denominator);
    return *this;
}

Fraction Fraction::operator/(const Fraction &other) const {
    Fraction fraction = *this;
    fraction /= other;
    return fraction;
}

Fraction &Fraction::operator/=(const Fraction &other) {
    set(numerator * other.denominator, denominator * other.numerator);
    return *this;
}

Fraction &Fraction::operator=(const Fraction &other) = default;

bool Fraction::operator==(const Fraction &other) const {
    return (compare(other) == 0);
}

bool Fraction::operator!=(const Fraction &other) const {
    return (compare(other) != 0);
}

bool Fraction::operator<=(const Fraction &other) const {
    return (compare(other) <= 0);
}

bool Fraction::operator>=(const Fraction &other) const {
    return (compare(other) >= 0);
}

bool Fraction::operator<(const Fraction &other) const {
    return (compare(other) < 0);
}

bool Fraction::operator>(const Fraction &other) const {
    return (compare(other) > 0);
}

Fraction operator-(const int &i, const Fraction &f) {
    return {f.numerator - (i * f.denominator), f.denominator};
}

/// Sørg for at nevneren alltid er positiv.
/// Bruker Euclids algoritme for å finne fellesnevneren.
void Fraction::reduce() {
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    int a = numerator;
    int b = denominator;
    int c;
    if (a < 0)
        a = -a;

    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }
    numerator /= a;
    denominator /= a;
}

/// Returnerer +1 hvis *this > other, 0 hvis de er like, -1 ellers
int Fraction::compare(const Fraction &other) const {
    Fraction fraction = *this - other;
    if (fraction.numerator > 0)
        return 1;
    else if (fraction.numerator == 0)
        return 0;
    else
        return -1;
}
