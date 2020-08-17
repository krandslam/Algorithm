#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string dial;
    getline(cin,dial);

    int cnt = 0;
    // 숫자 1: 2초 필요 / 숫자 2: 3초 필요
    for (int i = 0; i < dial.length(); i++){
        if (dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C') cnt += 3;
        else if (dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F') cnt += 4;
        else if (dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I') cnt += 5;
        else if (dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L') cnt += 6;
        else if (dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O') cnt += 7;
        else if (dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S') cnt += 8;
        else if (dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V') cnt += 9;
        else cnt += 10;
    }

    cout << cnt;

    return 0;
}