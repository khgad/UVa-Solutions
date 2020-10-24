#include <bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, m, c, idx, ci, mx, tempMx, T = 0;
    while (scanf("%d %d %d", &n, &m, &c)){
        if(n==0&&m==0&&c==0)break;
        map<int,pair<int, bool>> devices;
        mx = tempMx = 0;
        idx = 1;
        while (n--){
            scanf("%d", &ci);
            devices[idx++].first = ci;
        }
        while (m--){
            scanf("%d", &idx);
            devices[idx].second = !devices[idx].second;
            tempMx += (devices[idx].second?1:-1) * devices[idx].first;
            mx = max(mx, tempMx);
        }
        if(mx>c) printf("Sequence %d\nFuse was blown.\n\n", ++T);
        else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n", ++T, mx);
    }
    return 0;
}