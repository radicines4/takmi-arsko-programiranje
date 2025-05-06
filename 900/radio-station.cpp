#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
//zadatak: https://codeforces.com/contest/918/problem/B
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string, string> a;
    int n,m; cin>>n>>m;
    for(int i=0; i<n;i++){
        string ime,ip;
        cin>>ime>>ip;
        ip+=';';
        a[ip] = ime;
    }
    for(int i=0;i<m;++i){
        string ime,ip;
        cin>>ime>>ip;
        cout<<ime<<" "<<ip<<" #"<<a[ip]<<"\n";
    }
    return 0;
}
