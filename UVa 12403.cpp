#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, k, sum = 0;
    string operation;
    scanf("%d", &T);
    while (T--){
        cin >> operation;
        if (operation == "report") printf("%d\n", sum);
        else{
            scanf("%d", &k);
            sum += k;
        }
    }
    return 0;
}