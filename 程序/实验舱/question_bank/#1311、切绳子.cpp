#include<bits/stdc++.h>
using namespace std;

double t;
int n,k,ans;
int l[100005];

bool check(int x){
    int res = 0;
    for(int i = 0;i < n;i ++){
        res += (l[i] / x);
    }
    return res >= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%lf",&t);
        l[i] = t * 100;
    }
    int l = 1,r = 1000000000;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%.2lf\n",(double)ans / 100.0);

	return 0;
}