#include <bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    char nums[1000001];
    int n, i, j, T = 1;
    bool findDiff;
    while (scanf("%s", &nums) != EOF){
        scanf("%d", &n);
        printf("Case %d:\n", T++);
        while (n--){
            scanf("%d %d", &i, &j);
            if(i>j)swap(i,j);
            findDiff = false;
            for (int k = i; k <= j; ++k)
                if(nums[k] != nums[i]) {
                    findDiff = true;
                    break;
                }
            printf(findDiff?"No\n":"Yes\n");
        }
    }
    return 0;
}