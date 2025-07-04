#include <iostream>
#include <vector>
using namespace std;

void solve_vector_gugan() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;  // ��, �� �Է�

    // 1-based indexing�� ���� (N+1)x(M+1) ũ��� ����
    vector<vector<int>> A(N + 1, vector<int>(M + 1, 0));
    vector<vector<int>> D(N + 1, vector<int>(M + 1, 0));

    // A �迭 �Է� (1���� ����)
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> A[i][j];
        }
    }

    // ������ �迭 D ���
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            D[i][j] = D[i - 1][j] + D[i][j - 1] - D[i - 1][j - 1] + A[i][j];
        }
    }

    // ������ ��� ���
    cout << "������ �迭 D:" << '\n';
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cout << D[i][j] << " ";
        }
        cout << '\n';
    }
}
