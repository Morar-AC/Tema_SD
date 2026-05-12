#include<iostream>
#include<vector>
#include<queue>

using namespace std;



priority_queue<int,vector<int>,greater<int>>minhp;

priority_queue<int>maxhp;


void insert(int x) {

    maxhp.push(x);


    minhp.push(maxhp.top());
    maxhp.pop();


    if (maxhp.size() < minhp.size()) {
        maxhp.push(minhp.top());
        minhp.pop();
    }
}
int Median() {
    if (maxhp.size() > minhp.size()) {


        return maxhp.top();

    } else {

        return (maxhp.top()+minhp.top())/2;
    }
}

int main()
{

    insert(1);
    insert(4);
    insert(3);
    cout << Median();




}
