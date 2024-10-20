#include<bits/stdc++.h>
using namespace std;

struct node{
    int ti,vi;
    bool operator < (const node &a) const{
        return ti < a.ti;
    }
};

int n,m;
node a[505];
priority_queue<int> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&m,&n);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i].ti);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i].vi);
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        if(q.size() < a[i].ti){
            q.push(-1 * a[i].vi);
        }else{
            q.push(-1 * a[i].vi);
            m += q.top();
            q.pop();
        }
    }
    printf("%d\n",m);

    return 0;
}