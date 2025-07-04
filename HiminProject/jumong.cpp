#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_jumong() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> materials(N);
    for (int i = 0; i < N; i++) {
        cin >> materials[i];
    }

    sort(materials.begin(), materials.end()); // 투 포인터 위해 정렬

    int start = 0;
    int end = N - 1;
    int count = 0;

    while (start < end) {
        int sum = materials[start] + materials[end];
        if (sum == M) {
            count++;
            start++;
            end--; // 중복 피하기 위해 둘 다 이동
        }
        else if (sum < M) {
            start++;
        }
        else {
            end--;
        }
    }

    cout << count << '\n';
}
