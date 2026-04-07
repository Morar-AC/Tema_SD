#include <bits/stdc++.h>

using namespace std;


unordered_map<int,int>mep;

int n;
int s;
int a[5001];
int main()
{
            cin >> n >> s;
            for(int i = 1;i<=n;++i){
              cin >> a[i];
               mep[a[i]] = i;
            }

            int p1 = 0,p2 = 0,p3 = 0;

            for(int i = 1;i<=n;++i){

                if(p1)
                    break;

                for(int j = i+1;j<=n;++j)
            {
                int s1 = a[i] + a[j];
                if(mep[s-s1] > j && !p1)
                {
                    p1 = i,p2 = j,p3 = mep[s-s1];

                }
            }

            }


    if(p1)
        cout << p1 << " " << p2 << " " << p3 << endl;
    else cout << "Nu exista\n";





}

