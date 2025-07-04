#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_jumong() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int count = 0;
    int i = 0;          // 왼쪽 포인터
    int j = N - 1;      // 오른쪽 포인터

    // ✅ 투 포인터 알고리즘
    while (i < j) {
        int sum = A[i] + A[j];
        if (sum == M) {
            count++;
            i++;
            j--; // 쌍을 찾았으면 둘 다 이동 (중복 방지)
        }
        else if (sum < M) {
            i++; // 합이 작으면 왼쪽 수 키워야 하므로 i++
        }
        else {
            j--; // 합이 크면 오른쪽 수 줄여야 하므로 j--
        }
    }

    cout << count << "\n";
}
