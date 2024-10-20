#include<bits/stdc++.h>
using namespace std;

int t,n,ans;
char f[128];
string a[505];

void __init(){
    ans = 1;
    for(int i = 'a';i - 'a' < 26;i ++) f[i] = i;
}

char find(char x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> t;
    while(t --){
        cin >> n;
        __init();
        for(int i = 0;i < n;i ++){
            cin >> a[i];
            if(a[i][1] == '=')
                f[find(a[i][0])] = f[find(a[i][3])] = find(a[i][0]);
        }
        for(int i = 0;i < n;i ++)
            if(a[i][1] == '!')
                ans &= (find(a[i][0]) != find(a[i][3]));
        if(ans) printf("true\n");
        else printf("false\n");
    }

	return 0;
}