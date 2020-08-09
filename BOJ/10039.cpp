#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    int sum = 0;
    int input;
    for (int i = 0; i < 5; i++){
        cin >> input;
        if (input < 40) sum += 40;
        else sum += input;
    }

    // 평균 출력
    cout << sum / 5;

    return 0;
}