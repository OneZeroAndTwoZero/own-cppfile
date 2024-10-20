#include<bits/stdc++.h>
using namespace std;

struct node{
    int val,id;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n,m;
int a[10005];
node num[10005];
unordered_map<int,int> cnt;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    while(m --){
        cnt.clear();
        int maxn = 0;
        for(int i = 1;i <= n;i ++){
            scanf("%d",&a[i]);
            cnt[a[i]] ++;
        }
        for(int i = 1;i <= n;i ++){
            maxn = max(maxn,n - cnt[a[i]]);
        }
        for(int i = 1;i <= n;i ++){
            if(n - cnt[a[i]] != maxn) continue;
            num[i].val ++;
        }
    }
    for(int i = 1;i <= n;i ++){
        num[i].id = i;
    }
    sort(num + 1,num + n + 1);
    printf("%d\n",num[1].id);

    return 0;
}