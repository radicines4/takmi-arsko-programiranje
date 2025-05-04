#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/4/C
int main()
{
    ios::sync_with_stdio(0);
    int n; cin>>n;
    map<string, int> a;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(a.count(s) == 0) {cout << "OK\n"; a[s] = 1;}
        else{cout << s << a[s] << "\n"; a[s]++;}
    }
    return 0;
}
