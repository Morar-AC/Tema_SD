#include<bits/stdc++.h>

using namespace std;



struct comp{

   bool operator()(pair<int,int>x,pair<int,int>y)
   {
       if(x.first!=y.first)
         return x.first > y.first;


       return x.second > y.second;



   }


 };


priority_queue<pair<int,int>,vector<pair<int,int>>,comp>q;


int main()
{
    int k;
    cin >> k;
    list<int>l[k+1];

    list<int>ans;

    ///mai jos am o umplere de date
    for(int i = 1;i<=k;++i)
      {
          for(int j = 1;j<=10;++j)
            {

                l[i].push_back(j*4);
            }



      }

    for(int i = 1;i<=k;++i)
       q.push({l[i].front(),i});


    while(!q.empty())
      {

          int val = q.top().first;
          int id = q.top().second;
q.pop();




          ans.push_back(val);
          l[id].pop_front();

          if(l[id].size())
              q.push({l[id].front(),id});


      }


    for(int x : ans)
        cout << x << " ";



}


