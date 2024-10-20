#include<bits/stdc++.h>
using namespace std;

int s,e,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&s,&e);
    t = e + 24 - s;
    printf("%d\n",t);
    if(s >= 20 && s <= 23 && e >= 6 && e <= 9 && t >= 8 && t <= 10){
        printf("Healthy\n");
    }else{
        printf("Unhealthy\n");
    }

    return 0;
}