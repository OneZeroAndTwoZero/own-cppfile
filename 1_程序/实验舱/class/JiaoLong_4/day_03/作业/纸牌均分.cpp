#include<bits/stdc++.h>
using namespace std;

int n,ans,he,check;
int a[100005] = {0};

int main(){
	scanf("%d",&n);
	he = 0;
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		he += a[i];
	}
	check = he / n;
	ans = 0;
	for(int i = 0;i < n - 1;i++){
		if(a[i] == check){
			continue;
		}
		ans ++;
		a[i + 1] += (a[i] - check);
		a[i] = check;
	}
	printf("%d\n",ans);

	return 0;
}

