#include <iostream>
using namespace std;
bool broke[10];

// 해당 채널이동 불가능: 0 / 가능: 1이상
// 함수 return 값은 채널이동 할 때 누르는 숫자 길이
int possible(int c) {
    if (c == 0) {
        if (broke[0]) return 0;
        else return 1;
    }

    int len = 0;
    while (c > 0) {
        if (broke[c % 10]) return 0;
        else len++;
        c /= 10;
    }
    return len;
}

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        int tmp;
        cin >> tmp;
        broke[tmp] = true;
    }

    // 숫자 안누를때 +,- count
    int ans = n - 100;
    if (ans < 0) ans = -1*ans;

    // 숫자 누르고(채널 변경) +,-
    for (int i = 0; i <= 1000000; i++) {
        int c = i;
        int len = possible(c);

        if (len > 0) {
            int cnt = n - c;
            if (cnt < 0) cnt = -1*cnt;

            if (ans > cnt + len) ans = cnt + len;
        }
    }

    cout << ans;

    return 0;
}