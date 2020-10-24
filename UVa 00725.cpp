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

bool check(int nu, int de){
    int used = de < 10000, temp;
    temp = nu;
    while (temp) used |= 1 << (temp%10), temp /=10;
    temp = de;
    while (temp) used |= 1 << (temp%10), temp /=10;
    return (used == (1<<10)-1);
}

int main() {
    IOS;
    int n, nu, de, s = 0;
    while (cin >> n, n)
    {
        if(s++)pf("\n");
        int c = 0;
        for (int de = 1234; de <= 98765/n; de++)
        {
            nu = n*de;
            if(check(nu, de)){
                c++;
                pf("%0.5d / %0.5d = %d\n", nu, de, n);
            }
        }
        if(!c)
            pf("There are no solutions for %d.\n", n);
    }
    
    return 0;
}
