#include<bits/stdc++.h>
using namespace std;

int n,k,ans;

int main(){
    scanf("%d %d",&n,&k);
    ans = n % k;
    ans = k - ans;
    printf("%d\n",ans);

    return 0;
}

