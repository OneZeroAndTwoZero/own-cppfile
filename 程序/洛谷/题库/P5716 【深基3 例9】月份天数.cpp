#include<bits/stdc++.h>
using namespace std;

int y,m,ans;
map<int,int> d;

bool ok(int x){
    if(x % 4 != 0) return 0;
    if(x % 100 == 0 && x % 400 != 0) return 0;
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    d[1] = d[3] = d[5] = d[7] = d[8] = d[10] = d[12] = 31;
    d[4] = d[6] = d[9] = d[11] = 30;
    d[2] = 28;
    scanf("%d %d",&y,&m);
    ans = d[m];
    ans += m == 2 && ok(y);
    printf("%d\n",ans);

    return 0;
}