#include <bits/stdc++.h>

#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define nl '\n'
typedef long long ll;
using namespace std;

char grid[12][12];
int n;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool valid(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n;
}

void fill_the_square(){
    char c = 'A';
    int k = 0;
    string temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(grid[i][j] == '.') {
                k = 0;
                temp = "";
                for (int d = 0; d < 4; ++d) {
                    int to_i = i + dx[d];
                    int to_j = j + dy[d];
                    if (valid(to_i, to_j))
                        temp.push_back(grid[to_i][to_j]);
                }
                while (temp.find(c+k) != string::npos)k++;
                grid[i][j] = c+k;
            }
        }
    }
}

int main() {
    IOS;
    int TC, c = 1; cin >> TC;
    while (TC--){
        printf("Case %d:\n", c++);
        cin >> n;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> grid[i][j];
        fill_the_square();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c", grid[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}