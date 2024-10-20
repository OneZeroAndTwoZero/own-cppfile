#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0},b[100005] = {0},d[100005] = {0},d2[100005] = {0};
int n,t;
bool ans = 1;

int main(){
	scanf("%d %d",&n,&t);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		d[i] = a[i] - a[i - 1];
	}
	sort(d + 2,d + n + 1);
	while(t --){
		ans = 1;
		for(int i = 1;i <= n;i++){
			scanf("%d",&b[i]);
			d2[i] = b[i] - b[i - 1];
		}
		if(b[1] != a[1] || b[n] != a[n]){
			ans = 0;
		}
		sort(d2 + 2,d2 + n + 1);
		for(int i = 1;i <= n;i++){
			if(d2[i] != d[i]){
				ans = 0;
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

