#include<bits/stdc++.h>
using namespace std;

int n,pos = 1;
int a[100005];
unordered_map<int,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(pos;pos * pos <= n;pos ++){
        a[pos] = pos * pos;
        f[pos * pos] = 1;
    }
    if(f[n]){
        printf("1\n");
        return 0;
    }
    for(int i = 1;i < pos;i ++){
        for(int j = i;j < pos;j ++){
            f[a[i] + a[j]] = 1;
        }
    }
    if(f[n]){
        printf("2\n");
        return 0;
    }
    for(int i = 1;i < pos;i ++){
        for(int j = i;j < pos;j ++){
            for(int k = j;k < pos;k ++){
                f[a[i] + a[j] + a[k]] = 1;
            }
        }
    }
    if(f[n]){
        printf("3\n");
    }else{
        printf("4\n");
    }

    return 0;
}