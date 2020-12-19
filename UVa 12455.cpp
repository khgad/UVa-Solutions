#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
using namespace std;
typedef long long ll;

int main() {
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        int a[p];
        for (int i = 0; i < p && cin >> a[i]; ++i);
        int sum = 0, ans = 0;
        for (int i = 0; i < (1<<p); ++i) {
            sum = 0;
            for (int j = 0; j < p; ++j)
                if(i&(1<<j))
                    sum += a[j];
            if(sum == n){
                ans = 1;
                break;
            }
        }
        cout << (ans?"YES":"NO") << nl;
    }
    return 0;
}
