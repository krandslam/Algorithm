#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N[5];

    // 입력 받기
    for (int i = 0; i < 5; i++){
        cin >> N[i];
    }

    int setprice[6];

    // 세트 가격 구하기
    for (int i = 0; i < 6; i++){
        if (i < 3) {
            setprice[i] = N[i] + N[3] - 50;
        }
        else {
            setprice[i] = N[i-3]+ N[4] - 50;
        }
    }

    // 최소 세트 가격 찾기
    int smallest = setprice[0];
    for (int i = 1; i < 6; i++){
        if (setprice[i] < smallest) smallest = setprice[i];
    }
    cout << smallest;
    return 0;
}
