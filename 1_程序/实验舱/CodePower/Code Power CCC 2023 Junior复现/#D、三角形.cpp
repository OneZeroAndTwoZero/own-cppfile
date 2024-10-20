#include<bits/stdc++.h>
using namespace std;

int n,a[200005] = {0},b[200005] = {0},ans = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		if(a[i]) ans += 3;
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&b[i]);
		if(b[i]) ans += 3;
	}
	for(int i = 0;i < n;i++){
		if(i != 0){
			if(a[i] && a[i - 1]) ans --;
			if(b[i] && b[i - 1]) ans --;
		}
		if(i != n - 1){
			if(a[i] && a[i + 1]) ans --;
			if(b[i] && b[i + 1]) ans --;
		}
		if(i % 2 == 0){
			if(a[i] && b[i]){
				ans -= 2;
			}
		}
	}
	printf("%d\n",ans);

	return 0;
}

