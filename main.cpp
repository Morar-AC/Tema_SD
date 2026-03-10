#include <bits/stdc++.h>

using namespace std;



int a[100001];
int n,k;



int main()
{



     cin >> n >> k;
     for(int i = 1;i<=n;++i)
        cin >> a[i];

    srand(time(0));

         int dr = n,st = 1;
         int ans = 0;

           while(st<=dr)
                {

                    int pivot = rand() % (dr - st + 1) + st;

                     swap(a[pivot],a[dr]);

                     int ind = st;
                     for(int i = st;i<dr;++i)
                        {
                            if(a[i] <= a[dr])
                            {
                                swap(a[i],a[ind]);
                                ind++;

                            }
                        }
                     swap(a[ind],a[dr]);

                     if(ind == k)
                      {
                          cout << a[ind] << endl;
                          break;
                      }
                    else if(ind < k)
                    {
                        st = ind+1;
                    }
                    else dr = ind-1;


                }









}

