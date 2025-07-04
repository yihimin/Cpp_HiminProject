#include <iostream>
#include <vector>
using namespace std;

void solve_vector_gugan() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;  // 행, 열 입력

    // 1-based indexing을 위해 (N+1)x(M+1) 크기로 생성
    vector<vector<int>> A(N + 1, vector<int>(M + 1, 0));
    vector<vector<int>> D(N + 1, vector<int>(M + 1, 0));

    // A 배열 입력 (1부터 시작)
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> A[i][j];
        }
    }

    // 누적합 배열 D 계산
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            D[i][j] = D[i - 1][j] + D[i][j - 1] - D[i - 1][j - 1] + A[i][j];
        }
    }

    // 누적합 결과 출력
    cout << "누적합 배열 D:" << '\n';
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cout << D[i][j] << " ";
        }
        cout << '\n';
    }
}
