#include<bits/stdc++.h>
using namespace std;

int n,m;
long long sum1 = 0,sum2 = 0,p1,s2,s1;
int d[100005] = {0};
long long p[100005] = {0LL};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&p[i]);
	}
	scanf("%d %lld %lld %lld",&m,&p1,&s1,&s2);
	p[p1] += s1;
	for(int i = 1;i < m;i++){
		sum1 += abs(m - i) * p[i];
	}
	for(int i = m + 1;i <= n;i++){
		sum2 += abs(i - m) * p[i];
	}
	if(sum1 == sum2){
		printf("%d\n",m);
		return 0;
	}else if(sum1 < sum2){
		long long min_ = abs(sum1 - sum2);
		int min_n = m;
		for(int i = 1;i < m;i++){
			sum1 += abs(m - i) * s2;
			if(abs(sum1 - sum2) < min_){
				min_ = abs(sum1 - sum2);
				min_n = i;
			}
			sum1 -= abs(m - i) * s2;
		}
		printf("%d\n",min_n);
	}else{
		long long min_ = abs(sum1 - sum2);
		int min_n = m;
		for(int i = m + 1;i <= n;i++){
			sum2 += abs(m - i) * s2;
			if(abs(sum1 - sum2) < min_){
				min_ = abs(sum1 - sum2);
				min_n = i;
			}
			sum2 -= abs(m - i) * s2;
		}
		printf("%d\n",min_n);
	}

	return 0;
}

