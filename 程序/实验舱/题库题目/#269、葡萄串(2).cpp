#include<bits/stdc++.h>
using namespace std;

int n,m,l,r,ans = -1;
int a[100005] = {0};

bool check(int num){
	int tem = 0;
	for(int i = 0;i < n;i++){
		tem += ceil((double)a[i] / num);
	}
	return tem <= m;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	l = 1,r = 10000000000000;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			r = mid - 1;
			ans = mid;
		}else{
			l = mid + 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}

