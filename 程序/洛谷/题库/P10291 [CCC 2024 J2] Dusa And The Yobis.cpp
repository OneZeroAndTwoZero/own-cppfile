#include<bits/stdc++.h>
using namespace std;

int s,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&s);
    while(1){
        scanf("%d",&t);
        if(t >= s){
            printf("%d\n",s);
            break;
        }else{
            s += t;
        }
    }

    return 0;
}