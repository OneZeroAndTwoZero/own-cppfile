#include<bits/stdc++.h>
using namespace std;

struct num{
	int ai,ci;
};

num a[100005] = {0};
int n;
long long ans = 0;

bool cmp(num a,num b){
	return a.ai < b.ai;
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i].ai);
	}
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i].ci);
	}
	sort(a,a + n,cmp);
	int l = 1,r = n;
	while(l <= r){
		ans += abs(a[l].ai - a[r].ai) * min(a[l].ci,a[r].ci);
		l ++,r --;
	}
	printf("%lld\n",ans);

	return 0;
}

