#include<bits/stdc++.h>
using namespace std;

int n,m,t;
multiset<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&m);
        while(m --){
            scanf("%d",&t);
            s.insert(t);
        }
        printf("%d %d\n",*s.begin(),*(-- s.end()));
        s.erase(s.begin());
        s.erase(-- s.end());
    }

	return 0;
}