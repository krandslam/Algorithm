#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int num[N];
    cin >> num[0];
    int min, max;
    min = max = num[0];

    // 입력 저장 + min & max 구하기
    for (int i = 1; i < N; i++) {
        cin >> num[i];
        if (min > num[i]) min = num[i];
        if (max < num[i]) max = num[i];
    }
    cout << min << ' ' << max;

    return 0;
}