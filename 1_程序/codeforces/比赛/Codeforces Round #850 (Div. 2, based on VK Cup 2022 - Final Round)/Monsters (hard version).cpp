#include<bits/stdc++.h>
using namespace std;

struct guai{
	int zhi,id,k;
};

int t,n;
guai a[200005] = {0};

bool cmp1(guai a,guai b){
	return a.zhi < b.zhi;
}

bool cmp2(guai a,guai b){
	return a.id < b.id;
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		for(int i = 0;i <n;i++){
			scanf("%d",&a[i].zhi);
			a[i].id = i;
		}
		sort(a,a + n,cmp1);
		a[0].k = a[0].zhi - 1;
		a[0].zhi = 1;
		for(int i = 1;i < n;i++){
			if(a[i].zhi - a[i - 1].zhi >= 2){
				a[i].k = a[i].zhi - a[i - 1].zhi - 1;
				a[i].zhi = a[i - 1].zhi + 1;
			}
		}
		sort(a,a + n,cmp2);
		int sum = 0,min_ = 100000000;
		for(int i = 0;i < n;i++){
			min_ = min(min_,a[i].zhi);
			sum += a[i].k;
			printf("%d ",sum + (min_ - 1) * (i + 1));
		}
		puts("");
	}

	return 0;
}

