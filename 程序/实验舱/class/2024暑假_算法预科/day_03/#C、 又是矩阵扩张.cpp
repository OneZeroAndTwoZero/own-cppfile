#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,n,s;
long long x,y;

int operate(int k,long long x,long long y,bool is_same){
    if(k == 0){
        if(is_same) return s;
        return 1 - s;
    }
    long long curx = x / 2,cury = y / 2;
    bool cur = 1;
    if(curx * 2 == x && cury * 2 == y) cur = 0;
    if(is_same) return operate(k - 1,curx,cury,cur);
    return 1 - operate(k - 1,curx,cury,cur);

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
        scanf("%d %d %lld %lld",&n,&s,&x,&y);
        printf("%d\n",operate(n,x,y,1));
    }

    return 0;
}