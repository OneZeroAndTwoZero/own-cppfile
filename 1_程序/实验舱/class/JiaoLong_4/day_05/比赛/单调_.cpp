#include<bits/stdc++.h>
using namespace std;

int n;
long long ans;
long long a[200005] = {0};

long long sl(int s){
	long long re = 0;
	for(int i = 0;i < n;i++){
		re += abs(a[i] - (i + s));
	}
	return re;
}

long long zx(int f,int l){
	if(f == l) return sl(f);
	if(f + 1 == l) return min(sl(f),sl(l));
	int mid = (f + l) >> 1;
	long long p1 = sl(f);
	long long p2 = sl(mid);
	long long p3 = sl(l);
	if(p2 < p1 && p2 < p3){
	    return min(zx(f,mid),zx(mid + 1,l));
	}
	else if(p1 < p2 && p1 < p3){
	    return zx(f,mid);
	}
	else{
	    return zx(mid + 1,l);
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&a[i]);
	}
	ans = zx(-1e9 - 100,1e9 + 100);
	printf("%lld\n",ans);

	return 0;
}

