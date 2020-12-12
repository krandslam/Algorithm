#include <iostream>
#include <algorithm>
using namespace std;

char b[51][51];

int check(int n);

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
        }
    }

    //swap(b[1][1],b[1][2]);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // 오른쪽
            if (j+1 <= n) {
                swap(b[i][j],b[i][j+1]);
                int tmp = check(n);
                if (tmp > ans) ans = tmp;
                swap(b[i][j],b[i][j+1]); // 원상복귀
            }

            // 아래쪽
            if (i+1 <= n) {
                swap(b[i][j],b[i+1][j]);
                int tmp = check(n);
                if (tmp > ans) ans = tmp;
                swap(b[i][j],b[i+1][j]);
            }
        }
    }

    cout << ans;

    return 0;
}

int check(int n) {
    int cnt = 1;
    int ans = 1;

    // 모든 행
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-1; j++) {
            if (b[i][j] == b[i][j+1]) cnt += 1;
            else cnt = 1;
            if (ans < cnt) ans = cnt;
            if (j == n-1) cnt = 1;
        }
    }

    cnt = 1;
    // 모든 열
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n-1; i++) {
            if (b[i][j] == b[i+1][j]) cnt += 1;
            else cnt = 1;
            if (ans < cnt) ans = cnt;
            if (i == n-1) cnt = 1;
        }
    }

    return ans;
}