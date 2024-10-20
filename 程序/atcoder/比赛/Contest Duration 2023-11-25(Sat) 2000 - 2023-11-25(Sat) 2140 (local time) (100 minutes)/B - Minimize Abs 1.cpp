#include<bits/stdc++.h>
using namespace std;

int n,l,r,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&l,&r);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        if(t >= l && t <= r){
            printf("%d ",t);
        }else if(t > r){
            printf("%d ",r);
        }else{
            printf("%d ",l);
        }
    }
    printf("\n");

    return 0;
}