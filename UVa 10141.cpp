#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p,c=1;
    while (cin >> n >> p) {
        if (n == 0 && p == 0)break;
        if (c>1)cout << "\n";
        string Ignore, proposal, bestProposal;
        double  price, lowestPrice = 0;
        int nRequirements, maxRequirements = 0;
        cin.ignore();
        for (int i = 0; i < n; ++i)getline(cin,Ignore);
        for (int i = 0; i < p; ++i) {
            getline(cin,proposal);
            cin >> price >> nRequirements;
            if(nRequirements > maxRequirements || (nRequirements == maxRequirements && lowestPrice > price)){
                maxRequirements = nRequirements;
                lowestPrice = price;
                bestProposal = proposal;
            }
            cin.ignore();cin.ignore();
            for (int j = 0; j < nRequirements; ++j)getline(cin,Ignore);
        }
        cout << "RFP #" << c++ << "\n" << bestProposal << "\n";
    }
    return 0;
}