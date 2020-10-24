#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int T = 0, n, spentMoney, nPeople, eachGift;
    char name[13];
    while (scanf("%d", &n) != EOF){
        map<string, int> namesAns;
        vector<string> namesOrder;
        for (int i = 0; i < n; ++i) {
            scanf("%s", &name);
            namesAns[name] = 0;
            namesOrder.push_back(name);
        }
        while (n--){
            scanf("%s %d %d", &name, &spentMoney, &nPeople);
            if(!nPeople) continue;
            eachGift = spentMoney/nPeople;
            namesAns[name] -= eachGift * nPeople;
            while (nPeople--){
                scanf("%s", &name);
                namesAns[name] += eachGift;
            }
        }
        if(T++>0) printf("\n");
        for(auto str : namesOrder) printf("%s %d\n", str.c_str(), namesAns[str]);
    }
    return 0;
}