#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, x, y;
    scanf("%d", &T);
    while (T--){
        scanf("%d %d", &x, &y);
        printf("%s\n", x>y?">":x<y?"<":"=");
    }
    return 0;
}