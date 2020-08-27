#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// 둘째에 수열 A의 원소 A1, A2, ..., AN (1 ≤ Ai ≤ 1,000,000)이 주어진다
// 몇번 등장했는지 count
int freq[1000001];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> NGF(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i]]++; // 등장횟수 체크
    }

    stack<int> s1;
    s1.push(0);

    for (int i = 1; i < N; i++) {
        while (!s1.empty() && freq[A[s1.top()]] < freq[A[i]]) {
            // 오등큰수 경우만 NGF 저장 하고
            // 스택에서 pop
            NGF[s1.top()] = A[i];
            s1.pop();
        }
        // 오등큰수 검사 끝난 수 A[i]의
        // 오등큰수 찾을려고 push
        s1.push(i);
    }

    while (!s1.empty()){ // 오큰수 없는거 -1
        NGF[s1.top()] = -1;
        s1.pop();
    }

    for (int i = 0; i < N; i++){
        cout << NGF[i] << ' ';
    }

    return 0;
}
