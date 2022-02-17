#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int n;
    while (scanf("%d", &n) != EOF){
        int ans = 0;
        vector<int> s(n), e(n);
        for (int i = 0; i < n; ++i) scanf("%d", &s[i]);
        for (int i = 0; i < n; ++i) scanf("%d", &e[i]);
        int i = n-1, j = n-1;
        while (i >= 0){
            if(s[i] != e[j]){
                int idx = j-1;
                while (idx >= 0){
                    ans++;
                    if(s[i] == e[idx]){
                        e.erase(e.begin()+idx);
                        e.insert(e.begin()+i, s[i]);
                        break;
                    }
                    idx--;
                }
            }
            i--, j--;
        }
        printf("%d\n", ans);
    }
    return 0;
}