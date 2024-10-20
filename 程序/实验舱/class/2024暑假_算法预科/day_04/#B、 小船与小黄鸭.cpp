#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int q,r;
double t1,s1,s2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&q);
    while(q --){
        scanf("%lf %lf %lf %d",&t1,&s1,&s2,&r);
        printf("%.*lf\n",r,t1);
    }

    return 0;
}