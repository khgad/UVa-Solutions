#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int T, c = 1; cin >> T;
    while (T--){
        int n = 10, v = 0, mxV = 0;
        string page;
        queue<string> pages;
        cin >> page >> mxV;
        n--;
        pages.push(page);
        while (n--){
            cin >> page >> v;
            if(v >= mxV){
                if(v > mxV){while (!pages.empty()) pages.pop(); mxV = v;}
                pages.push(page);
            }
        }
        printf("Case #%d:\n", c++);
        while (!pages.empty()){
            printf("%s\n", pages.front().c_str());
            pages.pop();
        }
    }
    return 0;
}