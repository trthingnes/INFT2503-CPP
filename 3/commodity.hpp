#include <string>;

#pragma once;

using namespace std;

class Commodity {
public:
    Commodity(string name_, int id_, double price_);
    [[nodiscard]] string get_name() const { return name; };
    [[nodiscard]] int get_id() const { return id; };
    [[nodiscard]] double get_price(const int &quantity) const;
    [[nodiscard]] double get_price_with_sales_tax(const int &quantity) const;
    void set_price(const double &price_);

private:
    string name;
    int id;
    double price = 0;
};
