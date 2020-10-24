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
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        bool sol = false;
        cin >> a >> b >> c;
        for (int x = -22; x <= 22 && !sol; x++)
            if(x*x < c)
            for (int y = -100; y <= 100 && !sol; y++)
                if(x != y && x*x + y*y < c)
                for (int z = -100; z <= 100 && !sol; z++)
                    if(x!=z && y!=z &&
                     x+y+z == a && x*y*z == b && x*x+y*y+z*z == c){
                        pf("%d %d %d\n", x, y, z);
                        sol = true;
                    }
        if(!sol)
            pf("No solution.\n");
    }
    return 0;
}
