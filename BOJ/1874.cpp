#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack <int> s1;
    // m: 스택에 추가되어야하는 수
    int m = 1;
    bool no = false;
    string output;
    while (n--) {
        int k;
        cin >> k;

        // 넣어야 할 수가 더 크면 거기까지 push하고 pop
        if (k > m) {
            for (int i = m; i <= k; i++) {
                s1.push(i);
                output += "+\n";
            }
            s1.pop();
            output += "-\n";
            m = k+1;
        }
            // 스택이 비어있거나 top이랑 값이 다르면 오류
        else if (k < m) {
            if (s1.empty() || s1.top() != k) {
                no = true;
                break;
            }
            else {
                s1.pop();
                output += "-\n";
            }
        }
        else { // k == m
            s1.push(k);
            output += "+\n";
            s1.pop();
            output += "-\n";
            m++;
        }
    }

    if (no) cout << "NO";
    else cout << output;

    return 0;
}