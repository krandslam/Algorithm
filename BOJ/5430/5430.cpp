#include <iostream>
#include <deque>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();

    int n;
    while (T--) {
        deque<int> d;
        string line;
        cin >> line;
        cin >> n;
        cin.ignore();

        // 숫자가 없는 경우 예외처리
        if (n == 0) {
            if (line[0] == 'R') {
                cout << "[]" << '\n';
                // [] 버퍼에 들어온거 처리
                getline(cin,line);
            }
            else {
                cout << "error" << '\n';
                // [] 버퍼에 들어온거 처리
                getline(cin,line);
            }
            continue;
        }

        char num_arr;
        // 숫자 배열 처리
        cin >> num_arr;
        string nm;
        while (num_arr != ']') { // ']' 아스키코드값
            cin >> num_arr;
            if (num_arr != ',' && num_arr != ']') { // ',' 와 ']' 아닌경우
                nm += num_arr;
            }
            else {
                d.push_back(stoi(nm));
                nm.clear();
            }
        }
        cin.ignore();

        bool check = false; // 비어있는데 D 한 경우 체크
        bool reverse = false; // reverse 인지 체크
        // D 와 R 처리
        for (int i = 0; i < line.size(); i++) {
            if (line[i] == 'R') {
                if (!reverse) reverse = true;
                else reverse = false;
            }
            else if (line[i] == 'D'){
                if (d.empty()) {
                    check = true;
                    cout << "error" << '\n';
                    break;
                }
                else {
                    if (reverse) d.pop_back();
                    else d.pop_front();
                }
            }
        }

        if (!check) {
            int size = d.size();
            // deque 없는 경우
            if (size == 0) cout << "[" << "]";
                // 정상 출력
            else {
                cout << '[';
                if (reverse) {
                    while (!d.empty()) {
                        // 마지막 숫자랑 구분
                        if (d.size() == 1) cout << d.back();
                        else cout << d.back() << ',';
                        d.pop_back();
                    }
                }
                else {
                    while (!d.empty()) {
                        // 마지막 숫자랑 구분
                        if (d.size() == 1) cout << d.front();
                        else cout << d.front() << ',';
                        d.pop_front();
                    }
                }
                cout << ']';
            }
            cout << '\n';
        }
    }

    return 0;
}
