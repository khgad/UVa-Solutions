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
        ll n, k, total = 0, y;
        cin >> n >> k;
        vector<ll> profit(n);
        for (int i = 0; i < n; ++i) {
            cin >> profit[i];
            profit[i] *=-1;
        }
        for (int i = 0; i < n; ++i) {
            cin >> y;
            profit[i] += y;
        }
        sort(all(profit));
        for(int i : profit){
            if(i < 0 && k){
                k--;
            }
            else total += i;
        }
        printf("Case %d: ", c++);
        if(total > 0)
            printf("%lld\n", total);
        else
            printf("No Profit\n");
    }
    return 0;
}