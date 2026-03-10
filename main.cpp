#include <bits/stdc++.h>

using namespace std;


///voi presupune ca pb candies dp leetcode e asta : https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/






int main()
{

  int n;
  cin >> n;
  int st = 1,dr = n;
  int ans = 0;
  while(st <= dr)
     {
         int mij = (st+dr)/2;

           int k = mij * mij;
           if(k>n)
            {
              ans  = mij;
              dr = mij-1;
            }else st = mij+1;






     }





     if(ans)
        cout << ans-1;
        else cout << ans;








}

