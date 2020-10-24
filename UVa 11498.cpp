#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, m, x, y;
    while(cin >> k){
        cin >> n >> m;
        while (k--){
            cin >> x >> y;
            cout << (x>n && y>m ? "NE" : x>n && y<m? "SE" : x<n && y>m ? "NO" : x<n && y<m ? "SO":"divisa") << "\n";
        }
    }
    return 0;
}