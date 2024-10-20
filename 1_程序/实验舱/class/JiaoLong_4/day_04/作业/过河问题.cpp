#include<bits/stdc++.h>
using namespace std;

int t,n,pa,pb;
int ans = 0;
int a[100005] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		ans = 0;
		scanf("%d",&n);
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a + n);
		while(n != 0){
			if(n == 1){
				ans += a[0];
				break;
			}else if(n == 2){
				ans += a[1];
				break;
			}else if(n == 3){
				ans += a[0] + a[1] + a[2];
				break;
			}
			pa = a[n - 1] + a[0] + a[n - 2] + a[0];
			pb = a[1] + a[1] + a[n - 1] + a[0];
			ans += min(pa,pb);
			n -= 2;
		}
		printf("%d\n",ans);
	}

	return 0;
}

