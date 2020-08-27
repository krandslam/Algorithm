#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> NGE(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    stack<int> s1;
    s1.push(0);

    for (int i = 1; i < N; i++) {
        while (!s1.empty() && A[s1.top()]< A[i]) {
            // 오큰수 경우만 NGE 저장 하고
            // 스택에서 pop
            NGE[s1.top()] = A[i];
            s1.pop();
        }
        // 오큰수 검사 끝난 수 A[i]의
        // 오큰수 찾을려고 push
        s1.push(i);
    }

    while (!s1.empty()){ // 오큰수 없는거 -1
        NGE[s1.top()] = -1;
        s1.pop();
    }

    for (int i = 0; i < N; i++){
        cout << NGE[i] << ' ';
    }

    return 0;
}
