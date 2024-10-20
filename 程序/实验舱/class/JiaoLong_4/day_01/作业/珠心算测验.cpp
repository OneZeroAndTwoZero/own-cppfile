#include<bits/stdc++.h>
using namespace std;

unordered_map<int,bool> a;
int n,ans = 0;
int num[1000005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&num[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			a[num[i] + num[j]] = 1;
		}
	}
	for(int i = 0;i < n;i++){
		ans += a[num[i]];
	}
	printf("%d\n",ans);

	return 0;
}

