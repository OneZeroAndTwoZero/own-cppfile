#include<bits/stdc++.h>
using namespace std;

int t;
long long n,ans;
bool p;
vector<int> a;

bool operate(){
    while(n > 1){
        bool res = 0;
        for(int i = 9;i > 1;i --){
            if(n % i) continue;
            n /= i,res = 1;
            a.push_back(i);
            break;
        }
        if(!res) return 0;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%lld",&n);
        a.clear();
        if(!operate()){
            printf("-1\n");
            continue;
        }
        sort(a.begin(),a.end());
        ans = 0,p = 1;
        for(int i = 0;i < a.size();i ++){
            ans = ans * 10 + a[i];
            if((int)ans != ans){
                p = 0;
                break;
            }
        }
        if(p) printf("%lld\n",ans);
        else printf("-1\n");
    }

	return 0;
}