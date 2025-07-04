#include <iostream>
#include <vector>
using namespace std;

void solve_slide_window()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L;
    cin >> N >> L;

    vector<int> A(N + 1, 0);
    for (int i = 1; i < N + 1; i++) {
        cin >> A[i];
    }

    for(int i = 1; i < N + 1; i++) {
		int left = max(1, i - L + 1);

		int min = A[left];
        for (int j = left; j <= i; j++) {
            if (A[j] < min) {
                min = A[j];
            }
			cout << min << " ";
		}
	}
}
