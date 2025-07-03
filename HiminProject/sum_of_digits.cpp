#include <iostream>
#include "sum_of_digits.h"
using namespace std;

void solve_sum_of_digits() {
    int N;
    string numbers;
    cin >> N >> numbers;

    if (N < 1 || N > 100 || numbers.length() != N)
    {
        cout << "Invalid input\n";
        return;  // 여기선 void 함수니까 return만!
    }

    int sum = 0;
    for (int i = 0; i < numbers.length(); i++) {
        sum += numbers[i] - '0';
    }

    cout << sum << "\n";
}
