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
		d2[i] = d[i] - d[i - 1];
	}
	while(t --){
		ans = 1;
		for(int i = 1;i <= n;i++){
			scanf("%d",&b[i]);
		}
		if(b[1] != a[1] || b[n] != a[n]){
			ans = 0;
		}
		for(int i = 2;i <= n - 1 && ans;i++){
			cout << d2[i + 1] << ";;;\n";
			if(d2[i + 1] == 0 || abs(a[i] - b[i]) % abs(d2[i + 1]) != 0){
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

