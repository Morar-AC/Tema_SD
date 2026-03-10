#include <bits/stdc++.h>

using namespace std;


int a[1001][1001];
int n;




int main()
{

    cin >> n;
    int x;
    cin >> x;

    for(int i = 1;i<=n;++i)
          for(int j = 1;j<=n;++j)
               cin >> a[i][j];


       int ln,col;
       ln = col = 0;


        for(int i = 1;i<=n;++i)
         {
             int r = i;
             int c = 0;
             int st = 1,dr = n;
             while(st<=dr)
               {
                   int mij = (st+dr)/2;
                     if(a[r][mij] == x)
                      {
                          c = mij;
                          break;
                      }
                     else if(a[r][mij] < x)
                     {
                         st = mij+1;
                     }else dr = mij-1;



               }




             if(c)
               {
                   ln = r,col = c;
                   break;
               }


         }

              if(ln && col)
                  {
                      cout << ln << " " << col << endl;
                  }
                  else cout << "NU exista!";





}

