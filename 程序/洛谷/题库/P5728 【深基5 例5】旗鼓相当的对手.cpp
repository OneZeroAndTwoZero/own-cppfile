#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int y[1005] = {0},s[1005] = {0},e[1005] = {0};

bool ok(int i,int j){
    if(abs(y[i] - y[j]) > 5) return 0;
    if(abs(s[i] - s[j]) > 5) return 0;
    if(abs(e[i] - e[j]) > 5) return 0;
    if(abs(y[i] + s[i] + e[i] - y[j] - s[j] - e[j]) > 10) return 0;
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&y[i],&s[i],&e[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = i + 1;j < n;j ++){
            ans += ok(i,j);
        }
    }
    printf("%d\n",ans);

    return 0;
}