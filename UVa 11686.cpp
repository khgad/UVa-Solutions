#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;

using namespace std;

int n, m;
vector<vector<int>> nodes;
vector<int> sol;
map<int, int> d;

void print_s(){
    if(sol.size() == n){
        for(int i : sol)
            cout << i << nl;
    }
    else cout << "IMPOSSIBLE" << nl;
}

void bfs(){
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(!d[i])
            q.push(i);
    }
    while (!q.empty()){
        int t = q.front();
        sol.push_back(t+1);
        q.pop();
        for (int i : nodes[t]) {
            d[i]--;
            if(!d[i])
                q.push(i);
        }
    }
}

int main() {
    IOS;
    while (cin >> n >> m, n){
        sol.clear();
        nodes.resize(n);
        for (int i = 0, x, y; i < m; ++i) {
            cin >> x >> y;
            x--, y--;
            nodes[x].push_back(y);
            d[y]++;
        }
        bfs();
        print_s();
        sol.clear();
        nodes.clear();
        d.clear();
    }
    return 0;
}
