#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0,l = 1,r = 100000000;
int l_[200005] = {0};

bool check(int x){
    long long c = 0;
    for(int i = 0;i < n;i++){
        c += l_[i] / x;
    }
    return c >= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i++){
        scanf("%d",&l_[i]);
    }
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%d\n",ans);

    return 0;
}

