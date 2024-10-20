#include<bits/stdc++.h>
using namespace std;

int t;
int n,x,cha;
int cnt[200006] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        long long ans = 0;
        int max_ = -1,min_ = 65537;
        for(int i = 0;i <= 65590;i ++)
            cnt[i] = 0;
        scanf("%d",&max_);
        min_ = max_;
        ans = max_;
        cnt[ans] ++;
        for(int i = 1;i < n;i ++){
            scanf("%d",&x);
            if(x >= max_){
                ans += abs(x - max_);
                max_ = x;
            }else if(x <= min_){
                ans += abs(x - min_);
                min_ = x;
            }else{
                for(int j = 0;j + x <= max_ || x - j >= min_;j ++){
                    if(x + j <= max_ && cnt[x + j]){
                        cha = j;
                        break;
                    }
                    if(x - j >= min_ && cnt[x - j]){
                        cha = j;
                        break;
                    }
                }
                ans += cha;
            }
            cnt[x] = 1;
        }
        printf("%lld\n",ans);
    }

	return 0;
}
