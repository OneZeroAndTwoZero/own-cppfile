#include<bits/stdc++.h>
using namespace std;

int n,k,numt,ntmin = 0x3f3f3f3f;
int a[200005] = {0};
int t[200005] = {0};
int min_[200005] = {0};
long long ans,sum,sumt;
priority_queue<int> q;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&a[i],&t[i]);
		sum += a[i];
		if(t[i]){
			numt ++;
			sumt += a[i];
			q.push(a[i]);
		}else{
			ntmin = min(ntmin,a[i]);
		}
	}
	if(numt < k){
		ans += (sumt / 2);
		ans += (sum - sumt);
	}else if(k != 1){
		for(int i = k - 1;i >= 0;i --){
			min_[i] = q.top();
			q.pop();
		}
		while(q.size()){
			int pos = lower_bound(min_,min_ + k,q.top()) - min_;
			min_[pos] = q.top();
			q.pop();
		}
		ans = sum;
		min_[0] = min(min_[0],ntmin);
		for(int i = 0;i < k;i ++){
			ans -= (min_[i] / 2);
		}
	}else{
		ans = sum;
		if(numt){
			sort(a,a + n);
			ans -= (a[0] / 2);
		}
	}
	printf("%lld\n",ans);

	return 0;
}