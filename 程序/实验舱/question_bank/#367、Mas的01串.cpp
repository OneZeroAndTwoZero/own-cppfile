#include<bits/stdc++.h>
using namespace std;

long long ans = 0;
int n,k,r1 = 0,r2 = 0,cnt1 = 0,cnt2 = 0;
char a[10000007];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&k);
    scanf("%s",a);
    n = strlen(a);
    if(k == 0){
        a[n] = '1';
        long long cur = 0;
        for(int i = 0;i <= n;i ++){
            if(a[i] == '1'){
                ans += cur * (cur + 1) / 2;
                cur = 0;
            }else{
                cur ++;
            }
        }
    }else{
        for(int i = 0;i < n;i ++){
            while(r1 < n && cnt1 <= k){
                cnt1 += (a[r1] == '1');
                r1 ++;
            }
            if(cnt1 == k + 1) cnt1 --,r1 --;
            while(r2 < n && cnt2 < k){
                cnt2 += (a[r2] == '1');
                r2 ++;
            }
            if(cnt1 == k && cnt2 == k){
                ans += (r1 - r2 + 1);
            }
            cnt1 -= (a[i] == '1'),cnt2 -= (a[i] == '1');
        }
    }
    printf("%lld\n",ans);

    return 0;
}