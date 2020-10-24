#include <bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t, n, pos, temp;
    string ins, instructions[110];
    scanf("%d",&t);
    while (t--){
        pos = 0;
        scanf("%d",&n);
        int i = 0;
        while (n--) {
            cin >> ins;
            if (ins == "SAME") {
                cin >> ins >> temp;
                ins = instructions[temp-1];
            }
            pos += ins == "RIGHT"?1:-1;
            instructions[i++] = ins;
        }
        printf("%d\n", pos);
    }
    return 0;
}