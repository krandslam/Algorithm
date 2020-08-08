#include <iostream>

using namespace std;

int main() {

    int hr, min;

    cin >> hr >> min;
    if (hr == 0 && min >= 0 && min <= 44) {
        int min_tmp = min - 45; // 음수값
        min_tmp = 60 + min_tmp; // 더해줌
        hr = 23;
        cout << hr << " " << min_tmp;
    }
    else {
        int ori_time = hr*60 + min;
        int new_time = ori_time - 45;
        hr = new_time / 60;
        min = new_time - hr*60;
        cout << hr << " " << min;
    }


    return 0;
}
