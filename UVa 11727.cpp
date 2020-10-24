#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, C = 1, arr[3];
    scanf("%d", &T);
    while (T--){
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        sort(arr,arr+3);
        printf("Case %d: %d\n", C++, arr[1]);
    }
    return 0;
}