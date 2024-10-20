#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
using namespace std;

int n,m;
int op,x,w;
int a[100005],c[100005];

void update(int x,int cur){
    for(int i = x;i <= n;i += lowbit(i)){
        c[i] += cur;
    }
}

int getsum(int x){
    int res = 0;
    for(int i = x;i > 0;i -= lowbit(i)){
        res += c[i];
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        update(i,a[i]);
    }
    while(m --){
        scanf("%d %d %d",&op,&x,&w);
        if(op == 1){
            update(x,w - a[x]);
            a[x] = w;
        }else{
            int ans = 0,l = x + 1,r = n;
            while(l <= r){
                int mid = (l + r) >> 1;
                if((getsum(mid - 1) - getsum(x)) >= w){
                    ans = mid;
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            printf("%d\n",ans);
        }
    }

	return 0;
}