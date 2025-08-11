#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> unique_modulo;
    int num;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        unique_modulo.insert(num % 42);
    }

    cout << unique_modulo.size() << endl;
    return 0;
}
