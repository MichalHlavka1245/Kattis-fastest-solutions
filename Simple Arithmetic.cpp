#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long a, b;
    int c;
    cin >> a >> b >> c;
    long long celociselna_cast = (a * b) / c;
    long long zvysok = (a * b) % c;
    string desatinna_cast = "";
    int pocet_desatinnych_miest = 18;

    for (int i = 0; i < pocet_desatinnych_miest; i++) {
        zvysok *= 10;
        desatinna_cast += to_string(zvysok / c);
        zvysok %= c;
    }
    cout << celociselna_cast << "." << desatinna_cast << endl;

    return 0;
}
