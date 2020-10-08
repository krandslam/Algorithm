#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    vector <int> d(n+1);
    d[1] = 0;
    // bottom-up 방식
    for (int i = 2; i <= n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2]+1) {
            d[i] = d[i/2]+1;
        }
        if (i%3 == 0 && d[i] > d[i/3]+1) {
            d[i] = d[i/3]+1;
        }
    }
    cout << d[n];

    return 0;
}