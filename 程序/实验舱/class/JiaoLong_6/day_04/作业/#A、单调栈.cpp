#include<bits/stdc++.h>
using namespace std;

int n,a[1000005],f[1000005];
stack<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        while(s.size() && a[i] > a[s.top()]){
            f[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",f[i]," \n"[i == n]);
    }

	return 0;
}