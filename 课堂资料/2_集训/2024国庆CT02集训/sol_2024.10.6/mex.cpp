#include<iostream>
using namespace std;
template<typename T>inline T read(){
	T x=0,f=0;char c=getchar();
	while(!isdigit(c)) f=c=='-',c=getchar();
	while(isdigit(c)) x=x*10+c-48,c=getchar();
	return f?-x:x;
}

const int N=1e6+9;
int a[N],n;
int main(){
	freopen("mex.in","r",stdin);
	freopen("mex.out","w",stdout); 
	n=read<int>();
	for(int i=1;i<=n;i++) a[read<int>()]=i;

	long long ans=0;
	int mn=n+1,mx=0;
	for(int i=1;i<=n;i++){
		mn=min(mn,a[i-1]);
		mx=max(mx,a[i-1]);
		ans+=1LL*mn*(n+1-mx);
	}
	printf("%lld\n",ans);
	return 0;
}
