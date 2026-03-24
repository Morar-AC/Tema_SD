#include <bits/stdc++.h>

using namespace std;



int dx[] = {0,0,1,-1};
int dy[] = {-1,1,0,0};


queue<pair<int,int>>q;
int viz[1001][1001];
int a[1001][1001] ;/// 1 daca e blocata celula,0 altfel
int dist[1001][1001];

int n,m;
bool inmat(int i,int j)
  {
      return i<=n && j<=m && j>=1 && i>=1;

  }
void lee(int st,int dr)
  {
      q.push({st,dr});
      while(!q.empty())
        {
            int i = q.front().first;

            int j = q.front().second;

            q.pop();

            for(int d = 0;d<4;++d)
              {
                  int inou = dx[d] + i;
                  int jnou = dy[d] + j;

                   if(inmat(inou,jnou))
                    {
                        if(!viz[inou][jnou])
                        {
                            viz[inou][jnou] = 1;
                            dist[inou][jnou] = dist[i][j] + 1;
                            q.push({inou,jnou});




                        }
                    }


              }




        }




  }


int main()
{
        cin >> n >> m;

        int xs,ys;
        int xf,yf;
        cin >> xs >> ys >> xf >> yf;




         for(int i = 1;i<=n;++i)
        for(int j = 1;j<=m;++j)
       cin >> a[i][j];




       lee(xs,ys);
       cout << dist[xf][yf];






}

