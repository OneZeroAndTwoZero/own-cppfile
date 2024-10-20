#include<bits/stdc++.h>
using namespace std;

int f,n,ans = 0;
int dao[15] = {0};

bool check(int x){
    int res = 0,tem = x;
    while(x){
        if(dao[x % 10] == 0 && (x % 10) != 0) return 0;
        res = res * 10 + dao[x % 10];
        x /= 10;
    }
    return res == tem;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    dao[0] = 0,dao[1] = 1,dao[6] = 9,dao[8] = 8,dao[9] = 6;
    scanf("%d %d",&f,&n);
    for(int i = 1;i <= f;i ++)
        for(int j = 1;j <= n;j ++)
            ans += check(i * 100 + j);
    printf("%d\n",ans);

	return 0;
}