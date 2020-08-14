#include <iostream>
#include <string>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N[9];

    // 입력 배열에 저장
    for (int i = 0; i < 9; i++){
        cin >> N[i];
    }

    // 최댓값 & 해당 idx 구하기
    int max = N[0];
    int max_idx = 0;
    for (int i = 1; i < 9; i++) {
        if (N[i] > max) {
            max = N[i];
            max_idx = i;
        }
    }

    cout << max << '\n';
    cout << max_idx + 1 << '\n';
    return 0;
}