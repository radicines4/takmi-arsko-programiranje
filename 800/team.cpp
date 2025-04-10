#include <iostream>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/231/A
int main()
{
    int a, b, c, n; cin >> n;
    int brojac = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a+b+c>=2) ++brojac;
    }
    cout << brojac;
    return 0;
}
