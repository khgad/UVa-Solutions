#include <bits/stdc++.h>

#define all(v) ((v).begin()), ((v).end())
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
#define nl '\n'

using namespace std;
typedef long long ll;

int CASE = 1;

void solve()
{
    int n;
    cin >> n;
    double a[n];
    double multi_of_all_num = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        multi_of_all_num *= a[i];
    }
    ll p = n * multi_of_all_num;
    ll q = 0;
    for (int i = 0; i < n; i++)
    {
        q += multi_of_all_num / a[i];
    }
    ll d = __gcd(p, q);
    p /= d, q /= d;
    printf("Case %d: %lld/%lld\n", CASE++, p, q);
}

int main()
{
    IOS;
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
