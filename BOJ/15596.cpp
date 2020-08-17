#include <vector>
long long sum(std::vector<int> &a) {
    long long rslt = 0;
    for (int i = 0; i < a.size(); i++) {
        rslt += a[i];
    }
    return rslt;
}
