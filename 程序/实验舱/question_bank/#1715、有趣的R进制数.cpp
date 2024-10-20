#include<bits/stdc++.h>
using namespace std;

int n,t,r;

void operate(int x,int r){
    if(x == 0) return;
    operate(x / r,r);
    if(x % r < 10) printf("%d",x % r);
    else printf("%c",'A' + (x % r) - 10);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&t);
    while(t --){
        scanf("%d",&r);
        if(n == 0) printf("0");
        else operate(n,r);
        printf("\n");
    }

    return 0;
}