#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, r, d, ans, tempAns;
    bool D, R, Z;
    while (scanf("%d", &n)){
        if(!n) break;
        char road[n];
        scanf("%s", &road);
        D = R = Z = false;
        ans = tempAns = INT32_MAX;
        for (int i = 0; i < n; ++i) {
            if(road[i] == 'R'){
                if(D){
                    tempAns = i - d;
                    D = false;
                }
                R = true;
                r = i;
            }
            else if(road[i] == 'D'){
                if(R){
                    tempAns = i - r;
                    R = false;
                }
                D = true;
                d = i;
            }
            else if(road[i] == 'Z'){
                Z = true;
                break;
            }
            ans = min(ans, tempAns);
        }
        printf("%d\n", Z?0:ans);
    }
    return 0;
}