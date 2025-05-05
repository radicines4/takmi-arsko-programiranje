#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
//zadatak: https://codeforces.com/contest/855/problem/A
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    unordered_map<string, int> a;
    for(int i=0;i<n;++i){
        string ime; cin>>ime;
        if(a.count(ime) == 0) {cout << "NO\n"; a[ime] = 1;}
        else {cout << "YES\n";}
    }
    return 0;
}
