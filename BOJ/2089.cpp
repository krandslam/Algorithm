#include <iostream>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    stack<int> s;

    while (true) {
        if (N == 1 || N == 0) {
            if (N == 1) s.push(1);
            break;
        }
        // 홀수 음수 인 경우
        if (N%-2 == -1) {
            s.push(N%-2 + 2);
            N = N/-2 + 1;
        }
        else {
            s.push(N%-2);
            N = N/-2;
        }
    }

    // 스택에 저장한 수 출력 -> 진수 출력
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    // 예외 처리
    if (N == 0) cout << 0;

    return 0;
}