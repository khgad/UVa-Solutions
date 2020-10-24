#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, n;
    scanf("%d", &T);
    while (T--){
        scanf("%d", &n);
        n = (((n * 63) + 7492) * 5 - 498);
        printf("%d\n", abs((n/10)%10));
    }
    return 0;
}