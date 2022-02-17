#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

int a, b, row[8], sol;

bool valid(int r, int c){
    for (int i = 0; i < c; ++i)
        if(row[i] == r || (abs(row[i]-r) == abs(i-c)))
            return false;
    return true;
}

void backtrack(int c){
    if(c == 8 && row[b] == a){
        printf("%2d      %d", ++sol, row[0]+1);
        for (int i = 1; i < 8; ++i) printf(" %d", row[i]+1);
        printf("\n");
        return;
    }
    for (int i = 0; i < 8; ++i) {
        if(b == c && i != a) continue;
        if(valid(i, c))
            row[c] = i, backtrack(c+1);
    }
}

int main() {
    IOS;
    int TC; scanf("%d", &TC);
    while (TC--){
        scanf("%d %d", &a, &b);
        a--, b--;
        memset(row, 0, sizeof(row));
        sol = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        backtrack(0);
        if(TC)printf("\n");
    }
    return 0;
}