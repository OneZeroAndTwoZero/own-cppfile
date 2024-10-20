#include<bits/stdc++.h>
using namespace std;

int t;
int n;
long long k;
unordered_map<long long,int> f;
long long a[200005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d",&t);
	while(t --){
		bool ans = 0;
		scanf("%d %lld",&n,&k);
		f.clear();
		for(int i = 0;i < n;i ++){
			scanf("%lld",&a[i]);
			f[a[i]] += 1;
		}
		if(n == 1){
			if(a[0] == k){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
			continue;
		}
		for(int i = 0;i < n;i ++){
			if(f[a[i] - k] > 0){
				if(a[i] - k != a[i] || f[a[i] - k] > 1){
					ans = 1;
					break;
				}
			}
		}
		if(ans){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}