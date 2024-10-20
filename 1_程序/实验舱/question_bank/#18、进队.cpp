#include<bits/stdc++.h>
using namespace std;

int n,m,t;
queue<int> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&t);
        q.push(t);
    }
    scanf("%d",&m);
    while(q.front() < m && q.size()){
        printf("%d ",q.front());
        q.pop();
    }
    printf("%d ",m);
    while(q.size()){
        printf("%d ",q.front());
        q.pop();
    }
    printf("\n");

    return 0;
} 
