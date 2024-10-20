#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int k = 1;k <= n;k ++){
        for(int i = 1;;i ++){
            if(i * k > n) break;
            for(int j = i;;j ++){
                if(j * k > n || (i * j - 1) * k > 800) break;
                if(gcd(i,j) != 1) continue;
                ans ++;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}