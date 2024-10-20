#include<bits/stdc++.h>
using namespace std;

int t;
int n,x,cha;
int cnt[200006] = {0};
set<int> s;
set<int> :: iterator it;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        s.clear();
        scanf("%d",&n);
        long long ans = 0;
        int max_ = -1,min_ = 65537;
        for(int i = 0;i <= 65590;i ++) cnt[i] = 0;
        scanf("%d",&max_);
        s.insert(max_);
        min_ = max_;
        ans = max_;
        for(int i = 1;i < n;i ++){
            scanf("%d",&x);
            if(x >= max_){
                ans += abs(x - max_);
                max_ = x;
            }else if(x <= min_){
                ans += abs(x - min_);
                min_ = x;
            }else{
                //一定要用set内置的lower_bound!!
                //用lower_bound(s.begin(),s.end(),x)会爆炸
                //因为set本身有序,所以上面的操作会被卡成logn * logn
                it = s.lower_bound(x);
                cha = abs(*it - x);
                it --;
                cha = min(cha,abs(*it - x));
                ans += cha;
            }
            if(!cnt[x]) s.insert(x);
            cnt[x] = 1;
        }
        printf("%lld\n",ans);
    }

	return 0;
}
