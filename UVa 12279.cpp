#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c = 1, x, ans;
    while (scanf("%d", &n), n){
        for(ans = 0; n--; scanf("%d", &x), ans += x?1:-1);
        printf("Case %d: %d\n", c++, ans);
    }
    return 0;
}