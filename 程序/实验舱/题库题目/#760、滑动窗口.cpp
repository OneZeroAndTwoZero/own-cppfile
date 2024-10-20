#include<bits/stdc++.h>
using namespace std;

struct node{
    int hi,id;
};

int n,k,t;
deque<node> q1,q2; // 1--max 2--min
vector<int> ansmin,ansmax;

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
        while(q1.size() && q1.back().hi <= t){
            q1.pop_back();
        }
        while(q2.size() && q2.back().hi >= t){
            q2.pop_back();
        }
        q1.push_back({t,i});
        q2.push_back({t,i});
        if(i < k) continue;
        ansmax.push_back(q1.front().hi);
        ansmin.push_back(q2.front().hi);
    }
    for(int i = 0;i < n - k + 1;i ++){
        printf("%d%c",ansmin[i]," \n"[i == n - k]);
    }
    for(int i = 0;i < n - k + 1;i ++){
        printf("%d%c",ansmax[i]," \n"[i == n - k]);
    }

    return 0;
}
