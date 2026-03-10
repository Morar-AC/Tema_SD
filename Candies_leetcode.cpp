#include <bits/stdc++.h>

using namespace std;


///voi presupune ca pb candies dp leetcode e asta : https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/






int main()
{

     vector<int>candies;
     long long k;

     ///voi citi datele aici

     int n;
     cin >> n >> k;
     long long smax = 0;
     for(int i = 1;i<=n;++i)
        {
            int x;
            cin >> x;
            smax+=(long long)x;
            candies.push_back(x);
        }

     long long st = 1,dr = smax;
       long long ans = 0;


      if(smax >= k){
       while(st<=dr)
          {
              long long mij = (st+dr)/2;

              long long done = 0;
              for(int i = 0;i<candies.size();++i)
                 {
                     long long pot = candies[i] / mij;
                     done+=pot;




                 }

              if(done>=k)
              {
                  ans = mij;
                  st = mij+1;
              }
              else dr = mij-1;


          }



      }








      cout << ans;








}

