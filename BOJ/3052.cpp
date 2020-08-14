#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A;
    int remain[42] = {0};

    // remain별로 배열에 개수 카운트
    for (int i = 0; i < 10; i++){
        cin >> A;
        remain[A%42]++;
    }

    // remain 값이 존재하면 0보다 큼
    int diffremain_cnt = 0;
    for (int i = 0; i < 42; i++){
        if (remain[i] > 0) diffremain_cnt++;
    }

    cout << diffremain_cnt;

    return 0;
}