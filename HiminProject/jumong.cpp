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

    sort(materials.begin(), materials.end()); // �� ������ ���� ����

    int start = 0;
    int end = N - 1;
    int count = 0;

    while (start < end) {
        int sum = materials[start] + materials[end];
        if (sum == M) {
            count++;
            start++;
            end--; // �ߺ� ���ϱ� ���� �� �� �̵�
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
