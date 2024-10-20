#include<bits/stdc++.h>
using namespace std;

long long n,d;
long long v[100005],a[100005];
long long ans;
long long minn[100005];

long long operate(long long pos){
	if(pos == 1) return 0;
	long long tem = minn[pos - 1];
	long long cur = operate(tem);
	long long dir = v[pos] - v[tem] - cur;
	if(dir <= 0){
		return abs(dir);
	}
	long long need = (dir - 1) / d + 1;
	ans += need * a[tem];
	return need * d - (v[pos] - v[tem]) + cur;
}

int main(){
	freopen("road.in","r",stdin);
	freopen("road.out","w",stdout);
	
	scanf("%lld %lld",&n,&d);
	for(int i = 2;i <= n;i ++){
		scanf("%lld",&v[i]);
		v[i] += v[i - 1];
	}
	for(int i = 1;i <= n;i ++){
		scanf("%lld",&a[i]);
	}
	minn[1] = 1;
	for(int i = 2;i <= n;i ++){
		if(a[i] < a[minn[i - 1]]){
			minn[i] = i;
		}else{
			minn[i] = minn[i - 1];
		}
	}
	operate(n);
	printf("%lld\n",ans);
	
    return 0;
}