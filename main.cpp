#include <bits/stdc++.h>

using namespace std;

int a[100001];
int n;


int main()
{
     int s;
      cin >> n >> s;
      for(int i =  1;i<=n;++i)
         cin >> a[i];


       int ans1 = 0,ans2 = 0;



         for(int i = 1;i<=n;++i)
            {
                int st = i + 1,dr = n;
                int fnd = 0;
                while(st <= dr)
                {
                      int mij = (st+dr)/2;
                      int suma = a[i] + a[mij];
                      if(suma == s)
                          {
                              fnd = mij;
                              break;
                          }
                      else if(suma < s)
                         st = mij+1;
                         else dr = mij-1;



                }
             if(fnd)
             {
                 ans1 =i,ans2 = fnd;
                 break;
             }




             }




      if(ans1 == 0)
        cout << "Nu exista!\n";
      else cout << ans1 << " " << ans2 << endl;







}

