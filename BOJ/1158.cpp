#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int M = N;
    queue<int> q1;
    queue<int> for_print;

    for (int i = 1; i <= N; i++) {
        q1.push(i);
    }

    // K번째는 pop만하고 출력용 queue에 저장
    while (N--) {
        for (int i = 0; i < K; i++) {
            int tmp = q1.front();
            q1.pop();
            if (i != K-1) q1.push(tmp);
            else for_print.push(tmp);
        }
    }

    // 출력
    cout << "<";
    while (M--) {
        if (M != 0) cout << for_print.front() << ", ";
        else cout << for_print.front() << ">";
        for_print.pop();
    }

    return 0;
}