#include <iostream>
using namespace std;
int paper[500][500];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> paper[i][j];
        }
    }

    int ans = 0;
    // ㅁㅁㅁㅁ block
    for (int i = 0; i < n; i++) {
        for (int j = 0; j+3 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i][j+3];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁㅁㅁㅁ (vertical) block
    for (int j = 0; j < m; j++) {
        for (int i = 0; i+3 < n; i++) {
            int sum = paper[i][j] + paper[i+1][j] + paper[i+2][j] + paper[i+3][j];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁㅁ block
    // ㅁㅁ
    for (int i = 0; i+1 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i+1][j] + paper[i+1][j+1];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁ
    // ㅁ
    // ㅁ ㅁ
    for (int i = 0; i+2 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i+1][j] + paper[i+2][j] + paper[i+2][j+1];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁ ㅁ ㅁ
    // ㅁ
    for (int i = 0; i+1 < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i+1][j];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁㅁ
    //   ㅁ
    //   ㅁ
    for (int i = 0; i+2 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i+1][j+1] + paper[i+2][j+1];
            if (sum > ans) ans = sum;
        }
    }

    //     ㅁ
    // ㅁㅁㅁ
    for (int i = 1; i < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i-1][j+2];
            if (sum > ans) ans = sum;
        }
    }

    //    ㅁ
    //    ㅁ
    // ㅁ ㅁ
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < m; j++) {
            int sum = paper[i][j] + paper[i][j-1] + paper[i-1][j] + paper[i-2][j];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁ
    // ㅁ ㅁ ㅁ
    for (int i = 1; i < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i-1][j];
            if (sum > ans) ans = sum;
        }
    }

    //  ㅁ ㅁ
    //  ㅁ
    //  ㅁ
    for (int i = 0; i+2 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i+1][j] + paper[i+2][j];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁㅁㅁ
    //     ㅁ
    for (int i = 0; i+1 < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i+1][j+2];
            if (sum > ans) ans = sum;
        }
    }

    //  ㅁ
    //  ㅁ ㅁ
    //     ㅁ
    for (int i = 0; i+2 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i+1][j] + paper[i+1][j+1] + paper[i+2][j+1];
            if (sum > ans) ans = sum;
        }
    }

    //    ㅁ ㅁ
    // ㅁ ㅁ
    for (int i = 1; i < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i-1][j+1] + paper[i-1][j+2];
            if (sum > ans) ans = sum;
        }
    }

    //     ㅁ
    //  ㅁ ㅁ
    //  ㅁ
    for (int i = 2; i < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i-1][j] + paper[i-1][j+1] + paper[i-2][j+1];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁ ㅁ
    //    ㅁ ㅁ
    for (int i = 0; i+1 < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i+1][j+1] + paper[i+1][j+2];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁ
    // ㅁ ㅁ
    // ㅁ
    for (int i = 0; i+2 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i+1][j] + paper[i+2][j] + paper[i+1][j+1];
            if (sum > ans) ans = sum;
        }
    }

    // ㅁ ㅁ ㅁ
    //    ㅁ
    for (int i = 0; i+1 < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i+1][j+1];
            if (sum > ans) ans = sum;
        }
    }

    //     ㅁ
    //  ㅁ ㅁ
    //     ㅁ
    for (int i = 1; i+1 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int sum = paper[i][j] + paper[i-1][j+1] + paper[i+1][j+1] + paper[i][j+1];
            if (sum > ans) ans = sum;
        }
    }

    //   ㅁ
    // ㅁㅁㅁ
    for (int i = 1; i < n; i++) {
        for (int j = 0; j+2 < m; j++) {
            int sum = paper[i][j] + paper[i][j+1] + paper[i][j+2] + paper[i-1][j+1];
            if (sum > ans) ans = sum;
        }
    }

    cout << ans;

    return 0;
}