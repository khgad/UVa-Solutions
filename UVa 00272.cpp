#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string str;
    int quote = 0;
    while (getline(cin, str)){
        for (int i = 0; i < str.length(); ++i)
            if(str[i]=='\"') str.erase(i,1).insert(i,quote++%2?"\'\'":"``");
        printf("%s\n", str.c_str());
    }
    return 0;
}