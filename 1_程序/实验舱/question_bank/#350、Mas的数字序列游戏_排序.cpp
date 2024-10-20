#include<bits/stdc++.h>
using namespace std;

int n;
long long a[105];

int operate(long long x){
    int res = 0;
    while(x % 3 == 0){
        res ++;
        x /= 3;
    }
    return res;
}

bool cmp(long long a,long long b){
    int cura = operate(a),curb = operate(b);
    if(cura == curb) return a < b;
    return cura > curb;
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
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    sort(a,a + n,cmp);
    for(int i = 0;i < n;i ++){
        printf("%lld%c",a[i]," \n"[i == n - 1]);
    }

    return 0;
}