#include<bits/stdc++.h>
using namespace std;

int a[200005] = {0};
int n,ans = 0;

bool find(int x){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] == x) return 1;
		if(a[mid] > x){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	//if(a[1] == 0) ans ++;
	for(int i = 0;i < n;i++){
		if(find(a[i] * 2)){
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

