#include<bits/stdc++.h>
using namespace std;

int n,m;
int a,b;
vector<int> ans[10005];

void __init(){
    for(int i = 1;i <= n;i ++)
        ans[i].push_back(i);
}

void operate(){
    if(a == b) return;
    for(auto && i : ans[b]) ans[a].push_back(i);
    // swap清空内存
    vector<int> clear;
    swap(ans[b],clear);
}

void out(){
    for(int i = 1;i <= n;i ++){
        for(auto && k : ans[i]) printf("%d ",k);
        printf("\n");
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    __init();
    while(m --){
        scanf("%d %d",&a,&b);
        operate();
    }
    out();

	return 0;
}