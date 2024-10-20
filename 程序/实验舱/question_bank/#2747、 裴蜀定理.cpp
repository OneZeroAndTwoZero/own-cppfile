#include<bits/stdc++.h>
using namespace std;

int n;
int a[105];

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
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    int ans = a[1];
    for(int i = 2;i <= n;i ++){
        ans = gcd(ans,a[i]);
    }
    printf("%d\n",abs(ans));

    return 0;
}
