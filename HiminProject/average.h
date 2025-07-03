#include <iostream>
using namespace std;

void solve() {
    int N;
    string numbers;
    cin >> N >> numbers;

    if (N < 1 || N > 100 || numbers.length() != N) {
        cout << "Invalid input\n";
        return;
    }

    int sum = 0;
    for (int i = 0; i < numbers.length(); i++) {
        sum += numbers[i] - '0';
    }

    cout << sum << "\n";
}