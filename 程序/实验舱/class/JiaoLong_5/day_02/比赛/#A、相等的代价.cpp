#include<bits/stdc++.h>
using namespace std;

struct num{
	long long ai,ci;
	bool operator <(const num &a)const{
		return ai < a.ai;
	}
};

num a[100005] = {0};
int n,d;
long long ans = 0,sum = 0,now = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&a[i].ai);
	}
	for(int i = 0;i < n;i++){
		scanf("%lld",&a[i].ci);
		sum += a[i].ci;
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		now += a[i].ci;
		if(now >= (sum + 1) / 2){
			d = a[i].ai;
			break;
		}
	}
	for(int i = 0;i < n;i++){
		ans += a[i].ci * abs(a[i].ai - d);
	}
	printf("%lld\n",ans);

	return 0;
}

