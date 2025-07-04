#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_good_number2() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    int count = 0;

    for (int k = 0; k < N; k++) {
        long find = A[k];
        int i = 0;
        int j = N - 1;

        while (i < j) {
            if (i == k) { i++; continue; }
            if (j == k) { j--; continue; }

            long sum = A[i] + A[j];

            if (sum == find) {
                count++;
                break;
            }
            else if (sum < find) {
                i++;
            }
            else {
                j--;
            }
        }
    }

    cout << count << "\n";
}
