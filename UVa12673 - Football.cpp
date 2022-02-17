#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int n, g;
    while (scanf("%d %d", &n, &g) != EOF){
        int s, r, points = 0;
        vector<int> lose;
        for (int i = 0; i < n; ++i) {
            scanf("%d %d", &s, &r);
            if(s > r) points+=3;
            else if(s == r && g) points+=3, g--;
            else lose.emplace_back(r-s);
        }
        sort(all(lose));
        for(int i : lose){
            if(g-i > 0) points+=3, g-=(i+1);
            else if(g-i == 0) points++, g-=i;
            else break;
        }
        printf("%d\n", points);
    }
    return 0;
}