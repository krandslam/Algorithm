#include <iostream>
#include <string>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout.precision(10);

    int N;
    cin >> N;

    double score[N];
    cin >> score[0];
    double max = score[0];

    // 배열에 값 저장 + max 찾기
    for (int i = 1; i < N; i++) {
        cin >> score[i];
        if (score[i] > max) {
            max = score[i];
        }
    }

    // 새로운 값 계산 + 합 저장
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += score[i] / max * 100;
    }

    double rslt = sum / N;
    cout << rslt;
    return 0;
}