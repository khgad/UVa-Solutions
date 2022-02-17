#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int TC, c = 1; cin >> TC;
    while(TC--){
        int n, h, ta, td;
        cin >> n >> h >> ta >> td;
        vector<int> heights(n);
        for (int i = 0; i < n; ++i) cin >> heights[i];
        sort(all(heights));
        int total = 0;
        if(ta*2 <= td) {
            total = n * ta;
        }
        else{
            int i = 0, j = n-1;
            while (i < j){
                if(heights[i] + heights[j] < h)
                    total += td, i++, j--;
                else
                    total += ta, j--;
            }
            if(i == j) total += ta;
        }
        printf("Case %d: %d\n", c++, total);
    }
    return 0;
}