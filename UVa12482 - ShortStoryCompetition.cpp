#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;


int main() {
    IOS;
    int n, l, c;
    while (cin >> n >> l >> c){
        string words[n];
        for (int i = 0; i < n; ++i) cin >> words[i];
        int pages = 1, chars_per_line = words[0].size(), lines = 0, i = 1, m;
        while (i < n){
            m = words[i].size();
            if(chars_per_line +1+m <= c)
                chars_per_line += m+1;
            else{
                chars_per_line = m, lines++;
                pages += !(lines%l);
            }
            i++;
        }
        cout << pages << nl;
    }
    return 0;
}