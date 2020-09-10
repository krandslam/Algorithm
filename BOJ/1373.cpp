#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin,line);

    int len = line.length();

    // 맨 앞 수 처리
    if (len%3 == 1) {
        cout << line[0];
    }
    else if (len%3 == 2) {
        cout << (line[0] - '0') *2 + line[1] - '0';
    }

    // 나머지는 세자리로 처리 가능
    for (int i = len%3; i < len; i+=3) {
        cout << (line[i] - '0') *4 + (line[i+1] - '0')*2 +  line[i+2] - '0';
    }

    return 0;
}