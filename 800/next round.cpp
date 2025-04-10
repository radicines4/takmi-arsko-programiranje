#include <iostream>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/158/A
int main()
{
    int n, k; cin >> n >> k;
    int brojac = 0;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){

        if(a[i] >= a[k-1] && a[i] > 0)
            ++brojac;
    }
    cout << brojac << "\n";
}
