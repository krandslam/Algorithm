#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin,line);

    int cnt = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == 'c') {
            if (line[i+1] == '=') {
                cnt++;
                i++;
            }
            else if (line[i+1] == '-') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (line[i] == 'd') {
            if (line[i+1] == 'z') {
                if (line[i+2] == '=') {
                    cnt++;
                    i+=2;
                }
                else cnt++;
            }
            else if (line[i+1] == '-') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (line[i+1] == 'j') {
            if (line[i] == 'l') {
                cnt++;
                i++;
            }
            else if (line[i] == 'n') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if (line[i+1] == '=') {
            if (line[i] == 's') {
                cnt++;
                i++;
            }
            else if (line[i] == 'z') {
                cnt++;
                i++;
            }
            else cnt++;
        }
        else cnt++;
    }

    cout << cnt;
    return 0;
}