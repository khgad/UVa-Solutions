#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    int k, c = 0;
    while (scanf("%d", &k), k!=0) {
        if (c++)printf("\n");
        int a[k];
        for (int i = 0; i < k; ++i) scanf("%d", &a[i]);
        for (int i = 0; i < k - 5; ++i)
            for (int j = i + 1; j < k - 4; ++j)
                for (int l = j + 1; l < k - 3; ++l)
                    for (int m = l + 1; m < k - 2; ++m)
                        for (int n = m + 1; n < k - 1; ++n)
                            for (int p = n + 1; p < k; ++p)
                                printf("%d %d %d %d %d %d\n", a[i], a[j], a[l], a[m], a[n], a[p]);
    }
    return 0;
}