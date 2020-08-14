#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout.precision(5);
    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        int score[N];
        double sum = 0;
        // 입력 + 합 저장
        for (int j = 0; j < N; j++) {
            cin >> score[j];
            sum += score[j];
        }
        double avg = sum / N;
        double cnt = 0;
        // 평균보다 큰 점수 카운트
        for (int j = 0; j < N; j++) {
            if (avg < score[j]) cnt++;
        }

        // 출력 형식 맞추기
        double ratio = cnt / N * 100;
        printf("%.3f%%\n", ratio);
    }

    return 0;
}