#include<bits/stdc++.h>
using namespace std;

int n,l,ans = 0;
long long p;
long long a[2000005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %lld %d",&n,&p,&l);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    if(l == 0){
        int le = 0,r = 0;
        long long now = 0;
        while(now + a[r] <= p){
            now += a[r];
            r ++;
        }
        ans = r;
        for(int i = 1;i < n && r != n;i ++){
            now -= a[le];
            le ++;
            while(now + a[r] <= p && r < n){
                now += a[r];
                r ++;
                ans = max(ans,r - le);
            }
        }
        printf("%d\n",ans);
    }else if(n <= 100){
        for(int i = 0;i < n;i ++){
            for(int j = i + 1;j <= n;j ++){
                for(int c = 0;c <= l;c ++){
                    if(j - i <= c){
                        ans = max(ans,c);
                        continue;
                    }
                    for(int k = i;k + c < j;k ++){
                        long long cnt = 0;
                        for(int g = i;g < k;g ++){
                            cnt += a[g];
                        }
                        for(int g = k + c;g < j;g ++){
                            cnt += a[g];
                        }
                        if(cnt <= p){
                            ans = max(ans,j - i);
                            continue;
                        }
                    }
                }
            }
        }
        printf("%d\n",ans);
    }

	return 0;
}
