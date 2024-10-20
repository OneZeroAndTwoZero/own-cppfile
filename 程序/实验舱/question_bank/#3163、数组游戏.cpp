#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000006];

int operate(int x,int len){
    if(len == n){
        // cout << x << " " << a[x] << ";;\n";
        return a[x];
    }
    // cout << "[][]\n";
    int res = operate(x << 1,len << 1);
    if(x & 1) res = max(res,operate((x << 1) + 1,len << 1));
    else res = min(res,operate((x << 1) + 1,len << 1));
    // cout << x << " " << len << " " << res << "[]\n";
    return res;
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
        scanf("%d",&a[i]);
    }
    printf("%d\n",operate(0,1));

    return 0;
}