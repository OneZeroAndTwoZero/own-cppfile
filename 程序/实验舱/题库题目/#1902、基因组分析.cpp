#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100005];
set<long long> s;

void make(){
    for(int i = 1;i < n;i ++)
        a[i] = (a[i - 1] * 6807 + 2831) % 201701;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&k,&a[0]);
    make();
    for(int l = 0;l + k <= n;l ++){
        long long tem = 0;
        for(int i = l;i - l + 1 <= k;i ++)
            tem = tem * 10 + (a[i] % 4);
        s.insert(tem);
    }
    printf("%d\n",s.size());

	return 0;
}