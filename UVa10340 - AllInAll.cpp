#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int main() {
    IOS;
    string s, t;
    while (cin >> s >> t){
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()){
            if(t[j] == s[i]) i++;
            j++;
        }
        printf("%s\n", i == s.size()?"Yes":"No");
    }
    return 0;
}