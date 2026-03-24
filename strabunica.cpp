#include <bits/stdc++.h>

using namespace std;



int n;
int a[100001];

stack<pair<int,int>>s;

int st[100001],dr[100001];








int main()
{

    cin >> n;
    for(int i = 1;i<=n;++i)
       cin >> a[i];



           for(int i = 1;i<=n;++i)
           {
                if(i == 1)
                    st[i] = i;
                    else{

                         if(a[i-1] < a[i])
                              st[i] = i;

                        else{

                              while(!s.empty())
                                 {
                                     int val = s.top().first;
                                     if(val >= a[i])
                                          s.pop();
                                          else break;


                                 }


                               if(s.size())
                                st[i] = s.top().second + 1;
                                else st[i] = 1;








                        }


                    }


                s.push({a[i],i});


           }


            while(s.size())
             s.pop();



               for(int i = n;i>=1;--i)
           {
                if(i == n)
                    dr[i] = n;
                    else{

                         if(a[i+1] < a[i])
                              dr[i] = i;

                        else{

                              while(!s.empty())
                                 {
                                     int val = s.top().first;
                                     if(val >= a[i])
                                          s.pop();
                                          else break;


                                 }


                               if(s.size())
                                dr[i] = s.top().second - 1;
                                else dr[i] = n;








                        }


                    }


                s.push({a[i],i});


           }




             int ans = 0;
             for(int i = 1;i<=n;++i)
               {
                   int k = abs(st[i]-dr[i]) + 1;
                   k*=a[i];
                   ans = max(ans,k);



               }





                cout << ans;









}

