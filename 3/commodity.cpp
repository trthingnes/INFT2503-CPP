#include "commodity.hpp"
#include <iostream>
#include <string>

using namespace std;

const double tax = 0.25;

Commodity::Commodity(string name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

double Commodity::get_price(const int &quantity = 1) const {
    return price * quantity;
}

double Commodity::get_price_with_sales_tax(const int &quantity = 1) const {
    return price * (1 + tax);
}

void Commodity::set_price(const double &price) {
    this->price = price;
}

int main() {
    const double quantity = 2.5;
    Commodity commodity("Norvegia", 123, 73.50);

    cout << "Varenavn: " << commodity.get_name() << ", varenr: " << commodity.get_id() << " Pris pr enhet: " << commodity.get_price() << endl;

    cout << "Kilopris: " << commodity.get_price() << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;

    commodity.set_price(79.60);
    cout << "Ny kilopris: " << commodity.get_price() << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;
}