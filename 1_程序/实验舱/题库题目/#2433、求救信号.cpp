#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> f;
int n,m,x;
int a[100005] = {0};
int b[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&x);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        f[a[i]] = i + 1;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d",&b[i]);
        int pos = f[x - b[i]] - 1;
        if(pos != -1){
            printf("%d %d\n",pos,i);
            return 0;
        }
    }

	return 0;
}