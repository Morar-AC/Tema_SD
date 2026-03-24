#include <bits/stdc++.h>

using namespace std;




int a,b,t;
queue<pair<int,int>>q;





map<pair<int,int>,int>mep;

map<pair<int,int>,pair<int,int>>tata;


stack<pair<int,int>>mutari;





int main()
{

         cin >> a >> b >> t;
         int st = -1,dr = -1;


         q.push({0,0});
         mep[{0,0}] = 1;

         while(!q.empty())
           {
               int i = q.front().first;
               int j = q.front().second;
               q.pop();
               if( i == t || j == t)
                  {

                      st = i,dr = j;

                      break;
                  }

               int st1 = 0,dr1 = j;
               if(mep[{st1,dr1}] == 0)
                 {
                    mep[{st1,dr1}] = 1;
                    q.push({st1,dr1});
                    tata[{st1,dr1}] = {i,j};


                 }
               st1 = i,dr1 = 0;
                if(mep[{st1,dr1}] == 0)
                 {
                    mep[{st1,dr1}] = 1;
                    q.push({st1,dr1});
                      tata[{st1,dr1}] = {i,j};

                 }
               st1 = a,dr1 = j;
                if(mep[{st1,dr1}] == 0)
                 {
                    mep[{st1,dr1}] = 1;
                    q.push({st1,dr1});
  tata[{st1,dr1}] = {i,j};
                 }
                st1 = i,dr1 = b;
                if(mep[{st1,dr1}] == 0)
                 {
                    mep[{st1,dr1}] = 1;
                    q.push({st1,dr1});
  tata[{st1,dr1}] = {i,j};
                 }

                int pb = b - j;
                int scad = min(i,pb);
                 st1 = i-scad,dr1= j + scad;
                if(mep[{st1,dr1}] == 0)
                 {
                    mep[{st1,dr1}] = 1;
                    q.push({st1,dr1});
  tata[{st1,dr1}] = {i,j};
                 }
                  pb = a - i;
                 scad = min(j,pb);
                 st1 = i + scad,dr1  = j - scad;
                if(mep[{st1,dr1}] == 0)
                 {
                    mep[{st1,dr1}] = 1;
                    q.push({st1,dr1});
  tata[{st1,dr1}] = {i,j};
                 }









           }

      if (st != -1) {


    mutari.push({st, dr});


    while (st != 0 || dr != 0) {
          pair<int, int> parinte = tata[{st, dr}];
           st = parinte.first;
          dr = parinte.second;
           mutari.push({st, dr});
    }


    while (!mutari.empty()) {
        cout << mutari.top().first << " " << mutari.top().second << endl;
        mutari.pop();
    }





}

}
