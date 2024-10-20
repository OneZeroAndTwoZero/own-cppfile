#include<bits/stdc++.h>
using namespace std;

struct node{
    int a,b;
};

int T,n;
vector<node> a[10005];

void query(int x){
    for(auto && i : a[x]){
        printf("%d %d\n",i.a,i.b);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 1;i <= 100;i ++){
        for(int j = i + 1;j <= 100;j ++){
            if(i * i + i * j + j * j > 10000) continue;
            a[i * i + i * j + j * j].push_back({i,j});
        }
    }
    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        if(a[n].size()) printf("Yes\n");
        else{
            printf("No ");
            while(!a[n].size()){
                n ++;
            }
            printf("%d\n",n);
        }
        query(n);
    }

    return 0;
}