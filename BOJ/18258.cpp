#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    queue<int> q;
    string line;
    while (N--) {
        getline(cin,line);
        if (line[0] == 'p') {
            // push
            if (line[1] == 'u') {
                string num = line.substr(5);
                q.push(stoi(num));
            }
                // pop
            else {
                if (q.empty()) cout << -1 << '\n';
                else {
                    cout << q.front() << '\n';
                    q.pop();
                }
            }
        }
            // size
        else if (line[0] == 's') {
            cout << q.size() << '\n';
        }
            // empty
        else if (line[0] == 'e') {
            if (q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
            // front
        else if (line[0] == 'f') {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
            // back
        else {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }

    return 0;
}