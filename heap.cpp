#include <iostream>
#include<vector>
#include<queue>
using namespace std;




int d[100001];
vector <pair<int,int> >M[100001];
struct comp{

  bool operator()(int x,int y){
     return d[x] > d[y];
  }

};

int inf = 10000001;
priority_queue<int,vector<int>,comp>Q;
void dijk(int nod)
{
    Q.push(nod);

    while(!Q.empty())
    {
        int x = Q.top();

        Q.pop();
        for(auto i : M[x])
        {
            int vecin = i.first;
            int cost = i.second;
          if(d[vecin]>d[x]+cost)
    {

       d[vecin] = d[x] + cost;

        Q.push(vecin);


    }


        }




    }




}


int main()
{
   int n,m,p;
   cin >> n >> m >> p;
   for(int i = 1;i<=m;++i)
      {
          int x,y,c;
          cin >> x >> y >> c;
          M[x].push_back({y,c});
          M[y].push_back({x,c});
      }


  for(int i = 1;i<=n;++i)
    d[i] = inf;

  d[p] = 0;
   dijk(p);


   cout << "Distantele pana la noduri\n";

   for(int i = 1;i<=n;++i)
   if(d[i]<inf)
   cout << d[i] << ' ';
  else cout << -1 << ' ';


    return 0;
}
