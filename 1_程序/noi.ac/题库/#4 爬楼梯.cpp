#include<bits/stdc++.h>
using namespace std;

int n;
long long ans[55] = {0};

int main(){
    scanf("%d",&n);
    ans[1] = 1,ans[2] = 2;
    for(int i = 3;i <= n;i ++){
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    printf("%lld\n",ans[n]);

    return 0;
}
