#include<iostream>
#include<vector>
#include<queue>

using namespace std;


 priority_queue<int,vector<int>,greater<int>>q;

int main()
{

  int n;
  cin >> n;
  int s = 0;
  for(int i = 1;i<=n;++i)
    {
        int x;
        cin >> x;
        q.push(x);
    }
  while(q.size()>1)
   {
       int a = q.top();
       q.pop();
       int b = q.top();
       q.pop();
       s  = s+a+b;
       int h = a+b;
       q.push(h);






   }
   cout << s;


}
