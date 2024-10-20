#include<bits/stdc++.h>
using namespace std;

int n,m;
int l,r,ans;
int a[100005],b[100005],c[100005];
int qa,qb,qc;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        a[i] += a[i - 1],b[i] += b[i - 1],c[i] += c[i - 1];
    }
    while(m --){
        scanf("%d %d %d",&qa,&qb,&qc);
        l = 0,r = n,ans = -1;
        while(l <= r){
            int mid = (l + r) >> 1;
            if(a[mid] >= qa && b[mid] >= qb && c[mid] >= qc){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}