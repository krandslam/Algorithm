#include <iostream>
#include <string>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    string OX;
    getline(cin,OX); // 숫자 입력 후 공백 처리

    int score = 0;
    for (int i = 0; i < T; i++){
        getline(cin,OX);
        int score_cnt = 0;
        for (int j = 0; j < OX.size(); j++){
            if (OX[j] == 'O'){ // 'O'이면 더해야하는값 증가
                score_cnt++;
            }
            else { // 'X'이면 더해야하는값 0으로 초기화
                score_cnt = 0;
            }
            score += score_cnt; // 더해야하는 값을 배열에 계속 더하며 저장
        }
        cout << score << '\n'; // loop 끝나면 출력
        score = 0;
    }

    return 0;
}