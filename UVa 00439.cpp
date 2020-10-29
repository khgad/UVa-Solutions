#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'

using namespace std;
typedef long long ll;

char s1[5], s2[5];
int di[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dj[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int d[9][9];

bool valid(int i, int j){
    return 0 <= i && 0 <= j && i < 8 && j < 8;
}
int BFS(int i, int j, int x, int y){
    memset(d, -1, sizeof(d));
    queue<pair<int, int>> q;
    d[i][j] = 0;
    q.push({i, j});
    while (!q.empty()){
        int r = q.front().first, c = q.front().second; q.pop();
        if(r == x && c == y) return d[r][c];
        for (int k = 0; k < 8; ++k) {
            int ti = r + di[k];
            int tj = c + dj[k];
            if(valid(ti, tj) && d[ti][tj] == -1)
                d[ti][tj] = d[r][c] +1, q.push({ti, tj});
        }
    }
    return -1;
}

int main() {
    IOS;
    while (scanf("%s%s", s1, s2) != EOF){
        int moves = BFS(s1[1]-'1', s1[0]-'a', s2[1]-'1', s2[0]-'a');
        printf("To get from %s to %s takes %d knight moves.\n", s1, s2, moves);
    }
    return 0;
}
