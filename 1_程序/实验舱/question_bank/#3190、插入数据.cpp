#include<bits/stdc++.h>
using namespace std;

int n,k,x,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&k,&x);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&t);
        printf("%d ",t);
        if(i != k) continue;
        printf("%d ",x);
    }
    printf("\n");

	return 0;
}