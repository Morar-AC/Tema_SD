#include <iostream>

using namespace std;

///implementare linked list cu array
int st[100001],dr[100001] ;///lista cu 1e5 elemente st ptr elem din spate iar dr ptr elem urm.

int last;
int prim;
void insert_head(int val)
  {

       if(last == 0)
        last = val;

        if(prim)
       st[prim] = val;

       dr[val] = prim;

       st[val] = 0;
       prim = val;
  }
void erase_head()
     {
         int k = dr[prim];
         dr[prim] = 0;
         st[k] = 0;
         prim = k;

     }
void insert_tail(int val)
    {
        if(prim == 0)
            prim = val;


        if(last)
        dr[last] = val;
        st[val] = last;
        dr[val] = 0;
        last = val;


    }
void erase_tail(int val)
{
      int k = st[last];
      dr[k] = 0;
      st[last] = dr[last] = 0;
      last = k;

}

void insert_val(int pivot,int val)///inserare dupa pivot
{
    dr[val] = dr[pivot];
    st[val] = pivot;

    if (dr[pivot]!=0)
        st[dr[pivot]]= val;
    else
        last = val;

    dr[pivot] = val;


}
void erase_val(int val)
   {
       if(dr[val] == 0 && st[val] == 0)
           return;

       int l = st[val],r = dr[val];
       dr[l] = r;
       st[r] = l;
       dr[val] = st[val] = 0;


   }
int fnd(int val)
{
    int k = 1;
    int cur = prim;
    int ans = -1;
    while(cur!=0)
        {
            if(cur == val)
            {
                ans = k;
                break;
            }

            k++;
            cur = dr[cur];



        }

     return ans;




}


int main()
{
       last =  prim = 0;



}
