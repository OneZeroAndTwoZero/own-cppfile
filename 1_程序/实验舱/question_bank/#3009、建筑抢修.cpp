#include<bits/stdc++.h>
using namespace std;

struct node{
    int t,e;
    bool operator < (const node &a) const{
        return e < a.e;
    }
};

int n,use = 0,ans = 0;
priority_queue<int> q;
node a[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i].t,&a[i].e);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        if(use + a[i].t <= a[i].e){
            ans ++,use += a[i].t;
            q.push(a[i].t);
        }else{
            if(a[i].t >= q.top()) continue;
            use = use - q.top() + a[i].t;
            q.pop();
            q.push(a[i].t);
        }
    }
    printf("%d\n",ans);

    return 0;
}