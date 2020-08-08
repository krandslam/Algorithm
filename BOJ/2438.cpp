#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    // 이중반복문
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= i; j++){
            // 1번째는 별 한개 2번째는 별 두개 ...
            cout << '*';
        }
        // 별 다 출력하면 줄바꿈
        cout << '\n';
    }

    return 0;
}