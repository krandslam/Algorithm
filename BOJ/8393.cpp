#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int rslt = 0;
    for (int i = 1; i <= n; i++){
        rslt += i;
    }
    cout << rslt;

    return 0;
}