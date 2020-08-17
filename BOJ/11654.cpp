#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;

    cin >> c;
    // 아스키 코드 변환 char -> int
    cout << int(c);

    return 0;
}