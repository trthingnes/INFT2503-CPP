#include <iostream>

using namespace std;

const int length = 5;

int main() {
    cout << "Du må skrive " << length << " tall." << endl;

    int low, mid, high;
    double temp;

    for (int i = 1; i <= length; i++) {
        cout << "Temperatur " << i << ": ";
        cin >> temp;

        if (temp < 10) {
            low++;
        }
        else if (temp > 20) {
            high++;
        }
        else {
            mid++;
        }
    }

    cout << "Du skrev inn " << low << " lav(e), " << mid << " middels og " << high << " høy(e) temperaturer." << endl;
}
