#include<bits/stdc++.h>
using namespace std;

int p,c,ans;

int main(){
    scanf("%d %d",&p,&c);
    ans = p * 50 - c * 10;
    ans += (p > c) * 500;
    printf("%d\n",ans);

    return 0;
}

