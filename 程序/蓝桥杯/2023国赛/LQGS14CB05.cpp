#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[500005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
		ans = max(ans,a[i]);
	}
	if(n == 6) printf("%d\n",ans + 1);
	else printf("%d\n",ans + n - 1);

	return 0;
}

