#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int TC; cin >> TC;
    while (TC--){
        int m, w, cnt = 0;
        cin >> m >> w;
        vector<int> e(m);
        for (int i = 0; i < m; ++i) cin >> e[i];
        sort(all(e));
        for(int elephant : e){
            if(w-elephant >= 0){
                cnt++;
                w -= elephant;
            }
            else break;
        }
        cout << cnt << nl;
    }
    return 0;
}