#include<bits/stdc++.h>
using namespace std;

int n,q,t,x,k;
vector<int> a[100005];

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&t);
        a[t].push_back(i);
    }
    while(q --){
        scanf("%d %d",&x,&k);
        if(a[x].size() < k){
            printf("-1\n");
        }else{
            printf("%d\n",a[x][k - 1]);
        }
    }

	return 0;
}