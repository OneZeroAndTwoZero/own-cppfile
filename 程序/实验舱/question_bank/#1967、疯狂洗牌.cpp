#include<bits/stdc++.h>
using namespace std;

int n,k,p;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&k,&p);
    while(k --){
        if(p & 1){
            p = (p + 1) >> 1;
        }else{
            p = (p >> 1) + (n >> 1);
        }
    }
    printf("%d\n",p);

    return 0;
}