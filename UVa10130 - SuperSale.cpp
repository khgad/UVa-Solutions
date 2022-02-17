#include <bits/stdc++.h>

#define all(v) ((v).begin()), ((v).end())
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
#define nl '\n'

using namespace std;
typedef long long ll;

int n, g, mw, P[1001], W[1001], memo[1001][31];

int dp(int i, int w)
{
    if (i >= n || w <= 0)
        return 0;

    int &ans = memo[i][w];

    if (ans != -1)
        return ans;

    if (w < W[i])
        return ans = dp(i + 1, w);
    return ans = max(dp(i + 1, w), P[i] + dp(i + 1, w - W[i]));
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> P[i] >> W[i];
    }
    cin >> g;
    int sum = 0;
    while (g--)
    {
        memset(memo, -1, sizeof memo);
        cin >> mw;
        sum += dp(0, mw);
    }
    cout << sum << nl;
}

int main()
{
    IOS;
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);

    int TC;
    cin >> TC;
    while (TC--)
    {
        solve();
    }

    return 0;
}