#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
int a[1000006] = {0};
int d[1000006] = {0};
int s[1000006] = {0};
int t[1000006] = {0};
int cha[1000006] = {0};

bool check(int x){
    for(int i = 1;i <= n + 1;i ++) cha[i] = a[i] - a[i - 1];
    for(int i = 1;i <= x;i ++){
        int st = s[i],en = t[i] + 1,num = d[i];
        cha[st] -= num;
        cha[en] += num;
    }
    for(int i = 1;i <= n;i ++){
        cha[i] += cha[i - 1];
        if(cha[i] < 0) return 0;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= m;i ++){
        scanf("%d %d %d",&d[i],&s[i],&t[i]);
    }
    int l = 1,r = m;
    if(check(m)){
        printf("0\n");
        return 0;
    }
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            l = mid + 1;
        }else{
            ans = mid;
            r = mid - 1;
        }
    }
    printf("-1\n%d\n",ans);

	return 0;
}