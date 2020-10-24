#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, n, x, mn, mx;
    scanf("%d", &T);
    while (T--){
        scanf("%d", &n);
        for (mn = INT32_MAX, mx = INT32_MIN; n-- ; mn = min(mn, x), mx = max(mx, x))
            scanf("%d", &x);
        printf("%d\n", (mx-mn)*2);
    }
    return 0;
}