#include <bits/stdc++.h>

using namespace std;






stack<pair<int,int>>s;



int main()
{

      int n;
      cin >> n;
      int a[100001];
      for(int i = 1;i<=n;++i)
         cin >> a[i];




         for(int i = 1;i<=n;++i)
            {
                if(i != 1)
                  {
                      if(a[i] > a[i-1])
                         cout << "pt pozitia " << i << " " << "index corect e: " << i-1 << endl;
                      else{

                        while(!s.empty())
                          {
                              int val =s.top().first;
                              if(val >= a[i])
                                 s.pop();
                                 else break;






                          }

                          if(s.size())
                         cout << "pt pozitia " << i << " " << "index corect e: " << s.top().second << endl;

                      }





                  }



                s.push({a[i],i});

            }





}

