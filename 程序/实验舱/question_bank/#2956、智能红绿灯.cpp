#include<bits/stdc++.h>
using namespace std;

int n,t;
int st = -1,en = -1;
bool is_ready = 0,is_open = 0,is_add = 0;
int a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    while(n --){
        scanf("%d",&t);
        a[t] = 1;
    }
    for(int i = 1;i <= 12000;i ++){
        if(i == st){
            printf("%d ",i);
            is_open = 1;
            is_ready = is_add = 0;
            en = i + 30;
        }else if(i == en){
            printf("%d\n",i - 1);
            is_ready = is_open = is_add = 0;
        }
        if(!a[i]) continue;
        if(is_open){
            if(is_add) continue;
            en += 15;
            is_add = 1;
        }else{
            if(is_ready) continue;
            st = i + 15;
            is_ready = 1;
        }
    }

    return 0;
}