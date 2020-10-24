#include <bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
using namespace std;
int main() {
    int n;
    while (cin >> n){
        if(!n)break;
        string direction, current;
        current = "+x";
        for (int i = 1; i < n; ++i) {
            cin >> direction;
            if(direction == "No")continue;
            if(current == "+x") current = direction;
            else if(current == "-x"){
                current = direction;
                current[0]=current[0]=='+'?'-':'+';
            }
            else if(direction == current) current = "-x";
            else if(direction[0] != current[0] && direction[1] == current[1])current = "+x";
        }
        cout << current << "\n";
    }
    return 0;
}