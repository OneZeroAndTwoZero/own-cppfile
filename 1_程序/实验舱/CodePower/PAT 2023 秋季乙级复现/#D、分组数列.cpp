#include<bits/stdc++.h>
using namespace std;

int n,pos;
long long cnt[2000006];
long long x;

void __init(){
    long long k = 1;
    for(int i = 1;k <= 1000000000000LL;i ++){
        k += (i - 1) * 3LL;
        cnt[i] = k;
        k ++;
        pos = i;
    }
}

void find(long long x){
    int l = 1,r = pos,res;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(cnt[mid] < x){
            res = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    // cout << res << " " << cnt[res] << ";;\n";
    if((x - cnt[res] - 1) % 3){
        printf("Not Found\n");
    }else{
        printf("%lld\n",(long long)(res + 1) * res / 2 + (x - cnt[res] - 1) / 3 + 1);
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

    __init();
    // cout << pos << "\n";
    // for(int i = 1;i <= 10;i ++){
    //     cout << cnt[i] << " ;;\n";
    // }
    scanf("%d",&n);
    while(n --){
        scanf("%lld",&x);
        find(x);
    }

    return 0;
}