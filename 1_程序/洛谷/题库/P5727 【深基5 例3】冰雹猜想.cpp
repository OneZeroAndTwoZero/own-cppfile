#include<bits/stdc++.h>
using namespace std;

int n;

void dfs(int a){
    int t;
    if(a & 1) t = a * 3 + 1;
    else t = a / 2;
    if(a != 1) dfs(t);
    printf("%d ",a);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    dfs(n);

    return 0;
}