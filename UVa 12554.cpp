#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, l, i, j;
    cin >> n;
    string names[n], song[16]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to" ,"you"};
    for (int i = 0; i < n; ++i) cin >> names[i];
    i = j = 0;
    l = ceil(n/16.0)*16;
    for (int k = 0; k<l ;i=++i%n, j=++j%16, k++) cout << names[i] << ": " << song[j] << "\n";
    return 0;
}