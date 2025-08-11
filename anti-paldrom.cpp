#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


bool is_palindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}


void to_lowercase(string& s) {
    for (char& c : s) {
        c = tolower(c);
    }
}
string remove_spaces(string& s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}

int main() {
    string s;
    getline(cin, s);

    to_lowercase(s);
    remove_spaces(s);
    int n = s.length();
    //cout<<s<<endl;
    bool found_palindrome = false;


    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            if (is_palindrome(s, i, i + length - 1)) {
                found_palindrome = true;
                break;
            }
        }
        if (found_palindrome) {
            break;
        }
    }

    if (found_palindrome) {
        cout << "Palindrome"<<endl;
    } else {
        cout << "Anti-palindrome"<<endl;
    }

    return 0;
}
