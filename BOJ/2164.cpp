#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    int cnt = 1;
    while (N != 1) {
        if (cnt%2 == 1) {
            // 홀수번 버리기 = pop만
            q.pop();
            N--;
        }
        else {
            // 짝수번 push + pop
            q.push(q.front());
            q.pop();
        }
        cnt++;
    }

    cout << q.front();

    return 0;
}