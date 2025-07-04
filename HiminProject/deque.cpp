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
        // 1. �޺κп��� ���� ������ ū ���� ��� ����
        while (!mydeque.empty() && mydeque.back().second > now) {
			mydeque.pop_back();
        }
        //2. ���� �� ����
		mydeque.push_back(Node(i, now ));
        //3. ������ ������ ��� ���� ����
        if (mydeque.front().first <= i - L) {
            mydeque.pop_front();
        }
        //4. ����: ���� �ּҰ� ���
		cout << mydeque.front().second << " ";
    }
}