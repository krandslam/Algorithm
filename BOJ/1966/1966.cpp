#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int N, M;

    while (T--) {
        cin >> N >> M;
        queue<int> q;
        int K = N;
        while (K--) {
            int n;
            cin >> n;
            q.push(n);
        }

        int pop_cnt = 0;
        if (N == 1) cout << 1 << '\n';
        else {
            while (N != 0) {
                queue<int> tmp = q;
                tmp.pop();
                bool check = false;
                while(!tmp.empty()) {
                    // queue 맨 앞 수와 나머지 수 비교해서 큰거 있으면 true
                    if (tmp.front() > q.front()) {
                        check = true;
                        break;
                    }
                    tmp.pop();
                }
                if (check) {
                    // 큰 수 있는데 M번째 아닌 수 pop
                    if (M != 0) {
                        q.push(q.front());
                        q.pop();
                        M--;
                    }
                        // 큰 수 있는데 M번째 pop
                    else {
                        q.push(q.front());
                        q.pop();
                        M = N-1;
                    }
                }
                    // 맨 앞 수가 젤 크다
                else {
                    if (M == 0) {
                        // M번째 인쇄
                        pop_cnt++;
                        break;
                    }
                    else {
                        // M번째 아닌 수 인쇄
                        q.pop();
                        M--;
                        N--;
                        pop_cnt++;
                    }
                }
            }
            cout << pop_cnt << '\n';
        }
    }

    return 0;
}
