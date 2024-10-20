#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000005] = {0};
int m[5005][5005] = {0};
long long ans;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i ++){
		m[i][i] = a[i];
		for(int j = i + 1;j <= n;j++){
			m[i][j] = min(m[i][j - 1],a[j]);
		}
	}
	for(int i = 1;i <= n;i ++){
		for(int j = i;j <= n;j++){
			ans = max(ans,(long long)m[i][j] * (j - i + 1));
		}
	}
	printf("%lld\n",ans);

	return 0;
}

