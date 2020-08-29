#include <iostream>
#include <deque>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int pop_idx[M];
    for (int i = 0 ; i < M; i++) {
        cin >> pop_idx[i];
    }

    deque<int> d;
    for (int i = 1; i <= N; i++) {
        d.push_back(i);
    }

    deque<int> tmp;
    int cnt = 0;
    for (int i = 0; i < M; i++) {
        tmp = d;
        int deque_idx = 1;
        // pop_idx의 수가 덱의 어디에 위치하는지?
        while (!tmp.empty()) {
            if (tmp.front() == pop_idx[i]) break;
            tmp.pop_front();
            deque_idx++;
        }

        // 1번 경우
        if (deque_idx == 1) {
            d.pop_front();
            continue;
        }
        // 2번 경우 (왼쪽으로 이동)
        if ((!(d.size() % 2) && deque_idx <= d.size()/2) // 짝수
            || (d.size() % 2 && deque_idx <= d.size()/2+1)) { // 홀수일때 idx 비교 +1
            cnt += deque_idx-1;
            int pop = deque_idx-1;
            // 왼쪽 이동
            while (pop--) {
                d.push_back(d.front());
                d.pop_front();
            }
            // 원하는 수 pop
            d.pop_front();
        }
            // 3번 경우 (오른족으로 이동)
        else {
            int size = d.size();
            int count =  (deque_idx - size)*-1 + 1;
            cnt += count;
            while (count--) {
                d.push_front(d.back());
                d.pop_back();
            }
            // 원하는 수 pop
            d.pop_front();
        }
    }

    cout << cnt;
    return 0;
}
