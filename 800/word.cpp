#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/59/A
int main()
{
    string s; cin >> s;
    int velika = 0; int mala = 0;
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])) ++velika;
        else ++mala;
    }
    if(velika > mala) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}
