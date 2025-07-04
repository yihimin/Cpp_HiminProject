#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve_stack()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> ans(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    stack <int> myStack;
    myStack.push(0); // 어차피 처음에는 비어 있으니까, 0인 index는 무조건 들어감

    // 다음을 활용해서 작성하세요.
    // myStack.empty()  myStack.top() myStack.pop() 
    for (int i = 1; i < N; i++) {
        while (!myStack.empty() && A[myStack.top()] < A[i]) {
            ans[myStack.top()] = A[i];
            myStack.pop();
        }
        myStack.push(i);
	}

    for (!myStack.empty()) {
		ans[myStack.top()] = -1; // 스택에 남아있는 인덱스는 다음 큰 수가 없으므로 -1로 설정
		myStack.pop();
    }
	for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
	}
}
