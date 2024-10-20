#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,cnt = 0;
int a,b,c;

int getfirst(int x){
    int res = 0;
    while(x){
        res = x % 10;
        x /= 10;
    }
    return res;
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
        scanf("%d %d %d",&a,&b,&c);
        cnt = 0;
        for(int i = a + 1;i < b;i ++){
            if(getfirst(i) == c) cnt ++;
        }
        printf("%d\n",cnt);
    }

    return 0;
}