#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int n;
    while (scanf("%d", &n), n){
        int x, i = 0;
        while (n--){
            scanf("%d", &x);
            if(x) {
                if(i) printf(" ");
                printf("%d", x);
                i++;
            }
        }
        printf("%s\n", i?"":"0");
    }
    return 0;
}