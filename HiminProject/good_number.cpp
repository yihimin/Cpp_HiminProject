#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_good_number()
{
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
    for (int k = 1; k < N; k++) {
        long find = A[k];
        int i = 0;
        int j = k - 1;
        // 작성하세요.  
        while (i < j) {
            long sum = A[i] + A[j];
            if (sum == find) {
                count++;
                break; // 쌍을 찾았으면 더 이상 탐색할 필요 없음
            }
            else if (sum < find) {
                i++; // 합이 작으면 왼쪽 수 키워야 하므로 i++
            }
            else {
                j--; // 합이 크면 오른쪽 수 줄여야 하므로 j--
            }
        }
    }
    cout << count << "\n";
}
