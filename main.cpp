#include <bits/stdc++.h>

using namespace std;


vector<int>v;


void insert_val(int val)
  {
      v.push_back(val);
  }
void pop()
  {
      int last = v.size()-1;
      int select = rand()%(int)v.size();


      swap(v[last],v[select]);

      v.pop_back();


  }






int main()
{

     srand(time(0));






}

