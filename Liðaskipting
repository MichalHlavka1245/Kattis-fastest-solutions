#include <iostream>
#include <string>

using namespace std;

bool isDivisibleBy3(const string& number) {
   long long  sum = 0;
    
   for (char digit : number) {
        sum += (digit - '0'); 
    }
  return (sum % 3 == 0);
}

int main() {
    string Number;
    cin >> Number;

    if (isDivisibleBy3(Number)) {
        cout << "Jebb" << endl;
    } else {
        cout << "Neibb" << endl;
    }

    return 0;
}
