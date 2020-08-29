#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    queue<int> q1;
    for (int i = 1; i <= N; i++) {
        q1.push(i);
    }

    cout << "<";

    while (N--) {
        for (int i = 0; i < K; i++) {
            if (i != K-1) {
                // K-1번 push pop
                q1.push(q1.front());
                q1.pop();
            }
            else {
                if (N != 0){
                    // 마지막 숫자 아닐때
                    cout << q1.front() << ", ";
                    q1.pop();
                }
                else {
                    // 마지막 숫자 출력
                    cout << q1.front() << ">";
                }
            }
        }
    }

    return 0;
}
