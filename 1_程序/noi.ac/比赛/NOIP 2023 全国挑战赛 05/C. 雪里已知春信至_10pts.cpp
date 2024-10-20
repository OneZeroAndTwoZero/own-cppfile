#include<bits/stdc++.h>
using namespace std;

int t,n,q;
int op,l,r,pos;
int a[200005];

void solve1(){
	for(int i = r;i > l;i --){
		a[i] ^= a[i - 1];
	}
}

void solve2(){
	printf("%d\n",a[pos]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d",&t,&n,&q);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	while(q --){
		scanf("%d",&op);
		if(op == 1){
			scanf("%d %d",&l,&r);
			solve1();
		}else{
			scanf("%d",&pos);
			solve2();
		}
	}
	for(int i = 1;i <= n;i ++){
		printf("%d\n",a[i]);
	}

	return 0;
}
