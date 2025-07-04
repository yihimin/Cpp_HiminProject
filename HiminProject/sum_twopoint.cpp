#include <iostream>
#include "sum_twopoint.h"
using namespace std;

void solve_sum_twopoint() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1; // ����� ��(=�츮�� ���ϴ� ���) ���� �ڽ��� �̸� ī��Ʈ
    int start_index = 1;
    int end_index = 1;
    int sum = 1;
    while (end_index != N) // end_index == N �� ���(�����ڽ�_�� ����, count�� �ʱⰪ�� 1�� ����
    {
		sum += end_index + 1; // end_index�� 0���� �����ϴϱ�, +1�� ����� ��
		end_index++;
		// sum == N, sum > N, sum < N�� ���� ó��
        if (sum == N) {
            count++;
        }
        while (sum > N) {
            sum -= start_index; // start_index�� 0���� �����ϴϱ�, +1�� ����� ��
            start_index++;
            if (sum == N) {
                count++;
            }
		}

    }
    cout << count << "\n";

}