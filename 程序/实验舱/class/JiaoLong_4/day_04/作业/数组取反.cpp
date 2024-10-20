#include<bits/stdc++.h>
using namespace std;

int n,k,i;
int a[100005] = {0};
long long ans;

int main(){
	scanf("%d %d",&n,&k);
	ans = 0;
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
		ans += a[i];
	}
	sort(a,a + n);
	for(i = 0;a[i] <= 0 && k;i++){
		k --;
		ans += 2 * abs(a[i]);
		a[i] = abs(a[i]);
	}
	if(k & 1){
		if(i > 0){
			ans -= 2 * min(a[i],a[i - 1]);
		}else{
			ans -= 2 * a[0];
		}
	}
	cout << ans << endl;

	return 0;
}

