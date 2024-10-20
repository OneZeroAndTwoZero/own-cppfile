#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;

int main(){
    scanf("%d",&n);
    for(int i = 2;i <= n;i ++){
        ans += (i - 1) * 2;
    }
    printf("%d\n",ans + n - 1);

    return 0;
}