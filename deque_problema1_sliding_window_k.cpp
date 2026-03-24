#include <bits/stdc++.h>

using namespace std;




deque<int>dq;

int n,k;
int a[100001];






int main()
{
        cin >> n >> k;
        for(int i = 1;i<=n;++i)
          {

                cin >> a[i];

                   if(dq.size() > 0 && dq.front()<=i-k)
                     dq.pop_front();


                   while(!dq.empty() && a[dq.back()] > a[i])
                          dq.pop_back();

                  dq.push_back(i);







                   if(i>=k)
                   cout << a[dq.front()] << " ";

          }




}
