#include <iostream>

using namespace std;

int main() {

    int A, B;

    // 입력 두 개가 0이면 종료
    while (true){
        cin >> A >> B;
        if (A == 0 && B == 0) break;
        cout << A+B << endl;
    }

    return 0;
}