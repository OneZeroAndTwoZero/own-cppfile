#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r,len;
    bool operator < (const node &a) const{
        if(len != a.len) return len < a.len;
        return l > a.l;
    }
};

int n;
int a[500005];
priority_queue<node> q;

void operate(int x){
    node t = q.top();
    q.pop();
    // cout << t.l << " " << t.r << " " << t.len << "\n";
    if(t.len & 1){
        a[(t.l + t.r) >> 1] = x;
        if(t.len == 1) return;
        q.push({t.l,((t.l + t.r) >> 1) - 1,t.len >> 1});
        q.push({((t.l + t.r) >> 1) + 1,t.r,t.len >> 1});
    }else{
        // cout << ((t.l + t.r - 1) >> 1) << " " << x << "\n";
        a[(t.l + t.r - 1) >> 1] = x;
        q.push({(t.l + t.r + 1) >> 1,t.r,(t.len + 1) >> 1});
        if(t.len <= 2) return;
        q.push({t.l,((t.l + t.r - 1) >> 1) - 1,(t.len - 1) >> 1});
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    q.push({0,n - 1,n});
    for(int i = 1;i <= n;i ++){
        operate(i);
    }
    for(int i = 0;i < n;i ++){
        printf("%d%c",a[i]," \n"[i == n - 1]);
    }

	return 0;
}