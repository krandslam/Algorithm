#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore(); // 엔터 공백 처리

    string line;
    getline(cin,line);

    // 첫번째 수 변환 / sum: 숫자들의 합
    string num;
    num[0] = line[0];
    int sum = stoi(num);

    // 수 변환 계속해서 sum에 더함
    for (int i = 1; i < N; i++) {
        string tmp;
        tmp[0] = line[i];
        sum += stoi(tmp);
    }

    cout << sum;

    return 0;
}