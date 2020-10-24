#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, c = 1, l, w, h;
    scanf("%d", &T);
    while (T--){
        scanf("%d %d %d", &l, &w, &h);
        printf("Case %d: %s\n", c++, l<=20&&w<=20&&h<=20?"good":"bad");
    }
    return 0;
}