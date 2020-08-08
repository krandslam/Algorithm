#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    int cnt = 0;
    int loopN = 0;

    while(true){
        if (N == loopN) break;
        if (cnt == 0) loopN = N;

        int ten = loopN/10; // 십의 자리
        int one = loopN - (loopN/10)*10; // 일의 자리
        loopN = one * 10 + (ten+one) % 10; // 수는 68이다. 6+8 = 14이다. (14-> 4 나머지 연산) 새로운 수는 84

        cnt++;
    }
    if (!N) cout << 1 << endl; // N이 0인 경우 예외처리
    else cout << cnt << endl;

    return 0;
}