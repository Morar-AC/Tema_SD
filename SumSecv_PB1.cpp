#include <bits/stdc++.h>

using namespace std;



int main()
{
    int dp[100001];
    dp[0] = 0;
    int a[100001];
    int n;
    cin >> n;
    for(int i = 1;i<=n;++i){
       cin >> a[i];
       dp[i] = dp[i-1] + a[i];
    }
   int q;
   cin >> q;
   while(q--)
    {
         int l,r;
         cin >> l >> r;
         cout << dp[r] - dp[l-1] << '\n';




    }





}

