#include<bits/stdc++.h>
using namespace std;

long long n,q,t,sum = 0;
queue<long long> a;

int main(){
	scanf("%lld %lld",&n,&q);
	for(int i = 0;i < n;i++){
		scanf("%lld",&t);
		a.push(t);
	}
	while(a.size()){
		if(a.front() <= q){
		    sum += a.front();
			printf("%lld\n",sum);
			a.pop();
		}else{
			a.push(a.front() - q);
			sum += q;
			a.pop();
		}
	}

	return 0;
}

