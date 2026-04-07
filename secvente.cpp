#include <bits/stdc++.h>

using namespace std;


unordered_map<int,int>mep;


int a[100001];
int n;
int l,u;
long long ans1,ans2;

int main()
{
             ans1 = 0,ans2 = 0;

            int st = 1;
            ///calculam raspunsul pt l-1 apoi pt u iar rasp final e rasp[u] - rasp[l-1]


        cin >> n >> l >> u;
        for(int i = 1;i<=n;++i)
            cin >> a[i];




          for(int i = 1;i<=n;++i)
              {
                   mep[a[i]]++;
                   while(mep.size() > l-1)
                      {
                          mep[a[st]]--;

                            if(mep[a[st]] == 0)
                                mep.erase(a[st]);


                    st++;
                      }

                  ans1+=(i - st + 1);

              }
              mep.clear();
              st = 1;
             for(int i = 1;i<=n;++i)
              {
                   mep[a[i]]++;
                   while(mep.size() > u)
                      {
                          mep[a[st]]--;

                            if(mep[a[st]] == 0)
                                mep.erase(a[st]);


                    st++;
                      }

                  ans2+=(i - st + 1);

              }



    cout << ans2 - ans1 << endl;



}

