#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[200005] = {0};

int sl(int s){
	int re = 0;
	for(int i = s;i - s < n;i++){
		re += abs(a[i - s] - i);
	}
	return re;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	ans = 10000000;
	for(int i = -5000;i <= 5000;i++){
		int check = sl(i);
		if(check < ans) ans = check;
	}
	printf("%d\n",ans);

	return 0;
}

