#include <bits/stdc++.h>
using namespace std;
int main() {
    double h, u, d, f, total, perc;
    while (cin >> h >> u >> d >> f){
        if(h==0)break;
        total = 0;
        perc = (u*f)/100.0;
        int i = 1;
        while (true) {
            total+=u;
            if(total > h) break;
            total -= d;
            if(total < 0)break;
            u-=perc;
            if(u<0)u=0;
            i++;
        }
        cout << (total>0?"success ":"failure ") << "on day " << i << "\n";
    }
    return 0;
}