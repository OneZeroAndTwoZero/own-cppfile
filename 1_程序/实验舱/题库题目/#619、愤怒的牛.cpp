#include<bits/stdc++.h>
using namespace std;

int n,m,l,r,ans = -1;
int a[100005] = {0};

bool check(int num){
	int tem = 0,s = a[0];
	for(int i = 1;i < n;i++){
		if(a[i] - s >= num){
			s = a[i];
			tem ++;
		}
	}
	return tem + 1 >= m;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	l = 1,r = 10000000000000;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			l = mid + 1;
			ans = mid;
		}else{
			r = mid - 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}

