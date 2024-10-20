#include<bits/stdc++.h>
using namespace std;

int n,top = (1 << 20);
int a[100005] = {0};
long long ans = 0;
bool same = 1;
int x[1 << 22] = {0};
int t[1 << 22] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        if(i >= 2 && a[i] != a[i - 1]) same = 0;
    }
    if(same){
        for(int i = 2;i <= n;i += 2){
            ans += (n - i + 1);
        }
        printf("%lld\n",ans);
    }else{
        x[a[1]] = 1;
        if(a[1] == 0) ans = 1;
        for(int i = 2;i <= n;i ++){
            cout << i << "[][]\n";
            ans += x[a[i]];
            for(int i = 0;i <= top;i ++){
                cout << i << ";;;;\n";
                t[i ^ a[i]] += x[i];
            }
            for(int i = 0;i <= top;i ++){
                cout << i << ";;;;\n";
                x[i] += t[i];
                t[i] = 0;
            }
            cout << i << "[][]\n";
        }
        printf("%lld\n",ans);
    }

	return 0;
}