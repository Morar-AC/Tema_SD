#include <bits/stdc++.h>

using namespace std;


unordered_map<long long,long long>mep;
long long mod = 1e9+ 7;


long long dp[100001],s[100001];
///dp[i] e suma partiala normala iar s[i] e suma partiala a hashurilor
long long perm[100001];///suma de la 0 pana la i
long long hperm[100001];///suma hashurilor de la 0 pana la i ;



int main()
{
    int n;
    cin >> n;

    ///precalculam hashurile pt nr pana la n-1;
    mep[0] = 13;


    for(int i = 1;i<n;++i)
       {
           mep[i] = (mep[i-1] * 13)%mod;

       }


    for(int i = 1;i<=n;++i)
              {
                  long long x;
                  cin >> x;
                  if(x >= n)
                    x = -1e13;

                  dp[i] = dp[i-1] + x;
                  s[i] = s[i-1] + mep[x];


              }

              perm[0] = 0;
              hperm[0] = mep[0];


              for(int i = 1;i<n;++i)
                  {
                      hperm[i] = mep[i] + hperm[i-1];
                      perm[i] = i + perm[i-1];

                  }


        int q;
        cin >> q;
        while(q--)
              {

                int st,dr;
                cin >> st >> dr;
                long long s1 = dp[dr] - dp[st-1];
                long long s2 = s[dr] - s[st-1];

                  int r = dr-st;

                  if(perm[r] == s1 && hperm[r] == s2)
                       cout << "DA\n";
                  else cout << "NU\n";








              }




}

