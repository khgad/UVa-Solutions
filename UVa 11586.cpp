#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, len, M, F;
    cin >> n;
    cin.ignore();
    while (n--){
        string pieces;
        getline(cin, pieces);
        len = pieces.length(), M = F = 0;
        for (int i = 0; i < len; M += pieces[i] == 'M', F += pieces[i] == 'F', ++i);
        printf( M+F > 2 && M==F? "LOOP\n": "NO LOOP\n");
    }
    return 0;
}