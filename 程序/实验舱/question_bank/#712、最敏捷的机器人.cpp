#include<bits/stdc++.h>
using namespace std;

struct node{
    int val,id;
};

int n,k,t;
deque<node> q1,q2; // 1--max 2--min

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&t);
        while(q1.size() && q1.front().id <= i - k){
            q1.pop_front();
        }
        while(q2.size() && q2.front().id <= i - k){
            q2.pop_front();
        }
        while(q1.size() && q1.back().val <= t){
            q1.pop_back();
        }
        while(q2.size() && q2.back().val >= t){
            q2.pop_back();
        }
        q1.push_back({t,i});
        q2.push_back({t,i});
        if(i < k) continue;
        printf("%d %d\n",q1.front().val,q2.front().val);
    }

    return 0;
}