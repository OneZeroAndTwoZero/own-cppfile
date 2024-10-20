#include<bits/stdc++.h>
using namespace std;

int n,s,ans = 0;
int cntA[128],cntB[128];

void makeA(){
    for (int i = 0;i < n;i ++){
        s = (s * 345) % 19997;
        cntA[s % 26] ++;
    }
}

void makeB(){
    for (int i = 0;i < n;i ++){
        s = (s * 345) % 19997;
        cntB[s % 26] ++;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&s);
    makeA();
    makeB();
    for(int i = 0;i < 26;i ++){
        cntB[i] -= cntA[i];
        ans += max(0,cntB[i]);
    }
    printf("%d\n",ans);

	return 0;
}