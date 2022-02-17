#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

struct soldier{
public:
    int b, j;
};

bool cmp(soldier a, soldier b){
    if(a.j == b.j)
        return a.b > b.b;
    return a.j > b.j;
}

int main() {
    IOS;
    int n, C = 1;
    while (cin >> n, n){
        vector<soldier> s(n);
        for (int i = 0; i < n; ++i) cin >> s[i].b >> s[i].j;
        sort(all(s), cmp);
        int total = 0, i = 0, remain;
        while (i < n){
            total += s[i].b;
            i++;
        }
        remain = s[i-1].j;
        i = 0;
        int c = 0;
        while (i < n){
            c += s[i].b;
            remain = max(remain, s[i].j-(total-c));
            i++;
        }
        printf("Case %d: %d\n", C++, total+remain);
    }
    return 0;
}