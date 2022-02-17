#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int TC, c = 1, n, p, q; cin >> TC;
    while (TC--){
        cin >> n >> p >> q;
        int eg, cnt = 0;
        for (int i = 0; i < n; ++i) {
            cin >> eg;
            if(eg <= q && p){
                q -= eg;
                cnt++, p--;
            }
        }
        printf("Case %d: %d\n", c++, cnt);
    }
    return 0;
}