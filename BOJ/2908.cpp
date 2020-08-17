#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin,line);
    string num1 = line.substr(0,3);
    string num2 = line.substr(4);

    // 숫자1 백의 자리 & 일의 자리 변환
    char tmp = num1[0];
    num1[0] = num1[2];
    num1[2] = tmp;

    // 숫자2 백의 자리 & 일의 자리 변환
    tmp = num2[0];
    num2[0] = num2[2];
    num2[2] = tmp;

    // string -> int
    int A = stoi(num1);
    int B = stoi(num2);

    if (A > B) cout << A;
    else cout << B;

    return 0;
}