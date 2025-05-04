#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/4/A
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    if(n%2==0 && n>0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
