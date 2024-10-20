#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005],cnt[10005];
long long sum[10005];

void out(int l,int r){
    printf("%d\n",r - l + 1);
    for(int i = l;i <= r;i ++)
        printf("%d\n",a[i]);
    exit(0);
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
    for(int i = 1;i <= n;i ++){
        cnt[i] = -1;
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        sum[i] = (sum[i - 1] + a[i]) % n;
        if(cnt[sum[i]] == -1){
            cnt[sum[i]] = i;
        }else{
            out(cnt[sum[i]] + 1,i);
        }
    }

    return 0;
}