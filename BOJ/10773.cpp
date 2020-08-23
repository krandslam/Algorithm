#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack <int> s1;
    int K;
    cin >> K;

    while (K--) {
        int n;
        cin >> n;
        if (n != 0) {
            s1.push(n);
        }
        else {
            s1.pop();
        }
    }

    int sum = 0;
    while (!s1.empty()) {
        sum += s1.top();
        s1.pop();
    }

    cout << sum;

    return 0;
}