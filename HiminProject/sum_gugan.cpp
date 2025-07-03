#include <iostream>
#include "sum_gugan.h"
using namespace std;

void solve_sum_gugan(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int suNo, quizNo;
    cin >> suNo >> quizNo;
    int A[100001] = {};
    int S[100001] = {}; // 인덱스 1부터 사용하니까

    for (int i = 1; i <= suNo; i++) {
		cin >> A[i];
		S[i] = S[i - 1] + A[i]; // 누적 합 계산
    }

    for (int i = 0; i < quizNo; i++) {
		int left, right;
		cin >> left >> right;
		cout << S[right] - S[left - 1] << "\n"; // 구간 합 계산
    }
}