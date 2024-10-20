#include<bits/stdc++.h>
using namespace std;

int t,n;
int a[1005] = {0};
set<int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        f.clear();
        for(int i = 0;i < n;i ++)
            scanf("%d",&a[i]);
        for(int i = 0;i < n;i ++)
            for(int j = i + 1;j < n;j ++)
                f.insert(abs(a[i] - a[j]));
        printf("%d\n",f.size());
    }

	return 0;
}