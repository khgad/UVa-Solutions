#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int T, x, y;
    scanf("%d", &T);
    while (T--){
        scanf("%d %d", &x, &y);
        x = (x/3)*3, y = (y/3)*3;
        printf("%d\n", x*y/9);
    }
    return 0;
}