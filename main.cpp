#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; 
    cin >> N;


    int B, S;
    cin >> B >> S;


    vector<int> bags(N, 0);
    bags[0] = B;
    bags[1] = S;


    int total_candy = B + S;


    int avg = total_candy / N;


    int extra = total_candy % N;


    sort(bags.begin(), bags.end(), greater<int>());


    int moves = 0;
    for (int i = 0; i < N; i++) {
        if (i < extra) {

            if (bags[i] > avg + 1) {
                moves += bags[i] - (avg + 1);
            }
        } else {
            if (bags[i] > avg) {
                moves += bags[i] - avg;
            }
        }
    }

    cout << moves;

    return 0;
}