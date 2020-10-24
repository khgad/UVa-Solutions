#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define all(v) ((v).begin()),((v).end())
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define MAX 100001
#define nl '\n'

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi ;
typedef vector<ii> vii ;

int main() {
    IOS;
    int n, c = 0;
    while (cin >> n, n)
    {
        if(c++) pf("\n");
        int arr[n];
        for (int i = 0; i < n && cin >> arr[i]; i++);
        for (int i = 0; i < n-5; i++)
            for (int j = i+1; j < n-4; j++)
                for (int k = j+1; k < n-3; k++)
                    for (int l = k+1; l < n-2; l++)
                        for (int m = l+1; m < n-1; m++)
                            for (int o = m+1; o < n; o++)
                                pf("%d %d %d %d %d %d\n", arr[i], arr[j], arr[k], arr[l], arr[m], arr[o]);
    }
    
    return 0;
}
