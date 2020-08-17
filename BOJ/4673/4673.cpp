#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool notselfnum[10000] = {false};

    for (int i = 1; i < 10000; i++){
        if (i < 10) { // 한자리 수
            int not_self_num_one = i + i;
            notselfnum[not_self_num_one] = true;
        }
        else if (i < 100) { // 두자리 수
            int not_self_num_ten = i + i/10 + i - (i/10)*10;
            notselfnum[not_self_num_ten] = true;
        }
        else if (i < 1000) { // 세자리 수
            int not_self_num_hun = i + i/100 + i/10 - (i/100)*10 + i - (i/10)*10;
            notselfnum[not_self_num_hun] = true;
        }
        else if (i < 10000) { // 네자리 수
            int not_self_num_tho = i + i/1000 + (i/100) - (i/1000)*10 + i/10 - (i/100)*10 + i - (i/10)*10;
            if (not_self_num_tho >= 10000) continue; // 10000 넘어가면 배열 idx 넘어가서 예외 처리
            notselfnum[not_self_num_tho] = true;
        }
    }

    // 셀프 넘버 출력
    for (int i = 1; i < 10000; i++){
        if (!notselfnum[i]) cout << i << '\n';
    }

    return 0;
}
