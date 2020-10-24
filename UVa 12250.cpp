#include <bits/stdc++.h>
using namespace std;
int main() {
    int c = 1;
    map<string, string> lang;
    lang["HELLO"] = "ENGLISH", lang["HOLA"] = "SPANISH", lang["HALLO"] = "GERMAN";
    lang["BONJOUR"] = "FRENCH", lang["CIAO"] = "ITALIAN", lang["ZDRAVSTVUJTE"] = "RUSSIAN";
    string s;
    while (cin >> s, s!="#") printf("Case %d: %s\n", c++, lang[s].empty()?"UNKNOWN":lang[s].c_str());
    return 0;
}