#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100005] = {0};
int b[100005] = {0};
long long sa = 0,sb = 0;
int num;

long long dfs(int team,int k1,int k2,int pos1,int pos2){
    if(pos1 >= n && pos2 >= n)
        return 0;
    if(pos1 > n || pos2 > n) return 0;
    if(team == 1){
        if(k1 == 0) dfs(2,k1,k2,pos1,pos2 + 1);
        else return max(-dfs(2,k1,k2,pos1,pos2 + 1),a[pos1] - dfs(2,k1 - 1,k2,pos1 + 1,pos2));
    }else{
        if(k2 == 0) dfs(1,k1,k2,pos1 + 1,pos2);
        else return max(-dfs(1,k1,k2,pos1 + 1,pos2),b[pos2] - dfs(1,k1,k2 - 1,pos1,pos2 + 1));
    }
    return 0;
}

bool cmp(int a,int b){
    return a > b;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&b[i]);
    }
    sort(a,a + n,cmp);
    sort(b,b + n,cmp);
    printf("%lld\n",dfs(1,k,k,0,0));

	return 0;
}