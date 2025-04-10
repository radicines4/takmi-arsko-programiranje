#include <iostream>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/617/A
int main()
{
   int x; cin >> x;
   int brojac = x/5;
   if(x%5 != 0) ++brojac;
   cout << brojac;
}
