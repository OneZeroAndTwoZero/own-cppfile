#include<bits/stdc++.h>
using namespace std;

int n,k,num = 0;
int a[500005] = {0};
int cnt[200005] = {0};
long long ans = 0;
unordered_map<int,int> f;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }

    for(int i = 1;i <= n;i ++){
        f.clear();
        num = 0;
        for(int j = i;j <= n;j ++){
            //cout << i << "   " << j << endl;
            if(f[a[j]] == k) num --;
            if(f[a[j]] == k - 1) num ++;
            f[a[j]] ++;
            if(num == 0) ans ++;
        }
    }
    
    printf("%lld\n",ans);

	return 0;
}