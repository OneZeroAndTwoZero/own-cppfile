#include<bits/stdc++.h>
using namespace std;

int n,q,x;
int max_[100005] = {0},min_[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&q);
    min_[0] = 0x3f3f3f3f;
    for(int i = 1;i <= n;i ++){
        scanf("%d",&x);
        max_[i] = max(max_[i - 1],x);
        min_[i] = min(min_[i - 1],x);
    }
    while(q --){
        scanf("%d",&x);
        printf("%d%c",max_[x] - min_[x]," \n"[q == 0]);
    }

	return 0;
}