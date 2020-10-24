#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string fName, sName;
    int f, s, fSum, sSum;
    while(getline(cin,fName), getline(cin, sName)){
        f = s = 0;
        for(char c : fName){
            c = tolower(c);
            if(c >= 'a' && c <= 'z') f += c-'a'+1;
        }
        for(char c : sName){
            c = tolower(c);
            if(c >= 'a' && c <= 'z') s += c-'a'+1;
        }
        while (f>=10) {
            fSum = 0;
            while (f)fSum += f % 10, f /= 10;
            f = fSum;
        }
        while (s>=10){
            sSum = 0;
            while (s) sSum += s%10, s/=10;
            s = sSum;
        }
        if(f>s)swap(f,s);
        printf("%.2f %%\n", f*100.0/s);
    }
    return 0;
}