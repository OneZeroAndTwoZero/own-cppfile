#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    long long xi,yi;
};

int T;
node a,b,c;

int getarea(node x){
    if(x.xi >= 0 && x.yi >= 0) return 1;
    if(x.xi < 0 && x.yi >= 0) return 2;
    if(x.xi < 0 && x.yi < 0) return 3;
    return 4;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %lld",&a.xi,&a.yi);
        scanf("%lld %lld",&b.xi,&b.yi);
        scanf("%lld %lld",&c.xi,&c.yi);
        b.xi -= a.xi,c.xi -= a.xi;
        b.yi -= a.yi,c.yi -= a.yi;
        int temp1 = getarea(b),temp2 = getarea(c);
        if(temp1 > temp2) swap(temp1,temp2);
        if(temp1 == temp2){
            printf("%lld\n",min(abs(b.xi),abs(c.xi)) + min(abs(b.yi),abs(c.yi)) + 1);
        }else if(temp1 == 2 && temp2 == 3 || temp1 == 1 && temp2 == 4){
            printf("%lld\n",min(abs(b.xi),abs(c.xi)) + 1);
        }else if(temp1 == 1 && temp2 == 2 || temp1 == 3 && temp2 == 4){
            printf("%lld\n",min(abs(b.yi),abs(c.yi)) + 1);
        }else{
            printf("1\n");
        }
    }

    return 0;
}