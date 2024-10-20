#include<bits/stdc++.h>
using namespace std;

long long a,b,m;
int t,a1,a2,a3;

long long cheng(long long a,long long b){
	if(b == 1){
		return a;
	}
	long long t = cheng(a,b / 2);
	if(b & 1){
		return (((t + t) % m) + a) % m;
	}else{
		return (t + t) % m;
	}
}

long long cz(long long a,long long b){
	if(b == 0){
		return 1;
	}
	long long t = cz(a,b / 2);
	if(b & 1){
		return (cheng(t,t) % m) * a % m;
	}else{
		return (cheng(t,t)) % m;
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d %d %lld",&a1,&a2,&a3,&b);
		m = 200907;
		if(a3 - a2 == a2 - a1){
			printf("%lld\n",cheng(a3 - a2,b - 1) + a1);
		}else{
			printf("%lld\n",a1 * cz(a3 / a2,b - 1) % m);
		}
	}

	return 0;
}

