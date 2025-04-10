#include <iostream>
using namespace std;
//zadatak: https://codeforces.com/problemset/problem/1030/A
int main()
{
   int n, x; cin >> n;
   for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1){
            cout << "HARD";
            return 0;
        }
   }
   cout << "EASY";
}
