#include<bits/stdc++.h>
using namespace std;

int n,cnt = 0;
int a[1000006];

void jump(int x){
    if(x >= n){
        if(x == n) printf("Yes\n");
        else printf("No\n");
        return;
    }
    cnt ++;
    jump(x + a[x]);
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
    jump(1);
    printf("%d\n",cnt);

    return 0;
}