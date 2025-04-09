#include <iostream>
#include <vector>
using namespace std;
// zadatak: https://cses.fi/problemset/task/1083
int main()
{
    long long n; cin >> n;
    long long suma = n*(n+1)/2;
    long long a, suma1 = 0;
    for(int i = 1; i < n; i++){
        cin >> a;
        suma1+=a;
    }
    cout << suma-suma1 << "\n";

}
