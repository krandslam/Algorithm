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

    for (int i = 0; i < len; i++) {
        int first = (line[i]-'0')/4;
        int third = (line[i]-'0')%2;
        int second = ((line[i]-'0') - first*4 - third)/2;

        // 첫번째 수 처리
        if (i == 0) {
            if (line[i]-'0' < 2) cout << third;
            else if (line[i]-'0' < 4) cout << second << third;
            else cout << first << second << third;
        }

        else cout << first << second << third;
    }

    return 0;
}