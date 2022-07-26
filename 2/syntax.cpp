int main() {
    int a = 5;
    int &b = a; // En referanse må referere til noe. Løsning: La referansen b referere til a.
    int *c;
    c = &b;
    a = b + *c; // Derefereringsoperator kan ikke brukes på a og b (ikke-pekere). Løsning: Fjern * fra a og b.
    b = 2; // Referanser oppfører seg som vanlige variabelnavn, ikke pekere. Løsning: Fjern & fra b.
}
