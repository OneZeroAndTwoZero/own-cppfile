#include<bits/stdc++.h>
using namespace std;

int n;
int a[200005] = {0};
set<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++) scanf("%d",&a[i]);
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        if(i != n - 1) s.insert(-1 * (a[i] % a[i + 1]));
        if(i != 0) s.insert(-1 * (a[i] % a[i - 1]));
    }
    s.erase(s.begin());
    if(s.size()) printf("%d\n",abs(*s.begin()));
    else printf("-1\n");

	return 0;
}