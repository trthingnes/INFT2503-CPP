int main() {
    double number;

    double *p = &number; // Peker til number
    double &r = number; // Referanse til number

    number = 1;
    *p = 2;
    r = 3;
}