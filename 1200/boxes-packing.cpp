#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
//zadatak: https://codeforces.com/contest/903/problem/C
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    map<int,int> a;
    for(int i=0; i<n;++i){
        int b; cin>>b;
        a[b]++;
    }
    int maxi=0;
    for(auto& par : a){
        if(par.second > maxi) maxi = par.second;
    }
    cout << maxi << "\n";
    return 0;
}
