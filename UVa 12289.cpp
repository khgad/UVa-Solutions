#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    string word;
    scanf("%d", &T);
    while (T--) {
        cin >> word;
        printf("%d\n", word.length() == 5 ? 3 :
           word[0] == 'o' && word[1] == 'n' || word[0] == 'o' && word[2] == 'e' ||
           word[1] == 'n' && word[2] == 'e' ? 1 : 2);
    }
    return 0;
}