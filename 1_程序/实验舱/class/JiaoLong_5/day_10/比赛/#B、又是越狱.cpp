#include<bits/stdc++.h>
using namespace std;

int n,m,k;
long long mod = 998244353,ans,ni,cnt;

long long mi(long long a,long long b){
	if(b == 0) return 1;
	long long re = 1,t = mi(a,b / 2);
	if(b & 1) re = a;
	re = (t * t) % mod * re;
	return re % mod;
}

int main(){
	scanf("%d %d %d",&n,&m,&k);
	ans = mi(m,n);
	ni = mi()
	cnt =  

	return 0;
}

