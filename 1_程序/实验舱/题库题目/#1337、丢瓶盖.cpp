#include<bits/stdc++.h>
using namespace std;

int l = 1,r = 1000000000;
int k,b;
int a[100005] = {0};
int ans = 0;

bool check(int m){
    int res = 1;
    int now = 0;
    for(int i = 1;i < k;i ++){
        if(a[i] - now >= m){
            res ++;
            now = a[i];
        }
    }
    return res >= b;
}

void halfsearch(){
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = max(ans,mid);
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&k,&b);
    for(int i = 0;i < k;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + k);
    halfsearch();
    printf("%d\n",ans);

	return 0;
}