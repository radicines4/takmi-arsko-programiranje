#include <iostream>
#include <vector>
using namespace std;
// zadatak: https://cses.fi/problemset/task/1094
typedef long long ll;
int main()
{
    ll n; cin >> n;
    vector <ll> a(n);
    ll brojac = 0;
    for(int i = 0; i < n; i++){cin >> a[i];}
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            brojac+=(a[i-1]-a[i]);
            a[i] = a[i-1];
        }

    }
    cout << brojac << "\n";
    return 0;
}
