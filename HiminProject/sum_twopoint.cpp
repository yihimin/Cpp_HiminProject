#include <iostream>
#include "sum_twopoint.h"
using namespace std;

void solve_sum_twopoint() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1; // 경우의 수(=우리가 원하는 결과) 본인 자신을 미리 카운트
    int start_index = 1;
    int end_index = 1;
    int sum = 1;
    while (end_index != N) // end_index == N 인 경우(본인자신_를 제외, count의 초기값이 1인 이유
    {
        if (sum == N) {
            count++;
            sum = sum - start_index;
            start_index++;
        }
        else if (sum > N) {
            sum = sum - start_index;
            start_index++;
        }
        else {
            end_index++;
            sum = sum + end_index;
        }
    }
    cout << count << "\n";
}