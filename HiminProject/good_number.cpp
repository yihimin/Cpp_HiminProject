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
        // �ۼ��ϼ���.  
        while (i < j) {
            long sum = A[i] + A[j];
            if (sum == find) {
                count++;
                break; // ���� ã������ �� �̻� Ž���� �ʿ� ����
            }
            else if (sum < find) {
                i++; // ���� ������ ���� �� Ű���� �ϹǷ� i++
            }
            else {
                j--; // ���� ũ�� ������ �� �ٿ��� �ϹǷ� j--
            }
        }
    }
    cout << count << "\n";
}
