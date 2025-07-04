#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
typedef pair<int, int> Node;

void solve_deque()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L;
    cin >> N >> L;
    deque<Node> mydeque;

    for (int i = 0; i < N; i++) {
        int now;
        cin >> now;
        // 1. 뒷부분에서 현재 값보다 큰 값은 모두 제거
        while (!mydeque.empty() && mydeque.back().second > now) {
			mydeque.pop_back();
        }
        //2. 현재 값 삽입
		mydeque.push_back(Node(i, now ));
        //3. 윈도우 범위를 벗어난 값은 제거
        if (mydeque.front().first <= i - L) {
            mydeque.pop_front();
        }
        //4. 정답: 현재 최소값 출력
		cout << mydeque.front().second << " ";
    }
}