#include<bits/stdc++.h>
using namespace std;

int t,n,q,op,l,r,x;
int a[300005] = {0};
int d[300005] = {0};

void cz(int i,int a){
	while(a){
		d[i] += a % 10;
		a /= 10;
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&q);
		d[0] = 0;
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
			d[i] = i == 0 ? 0 : d[i - 1];
			cz(i,a[i]);
		}
		for(int i = 0;i < q;i++){
			scanf("%d",&op);
			if(op == 1){
				scanf("%d %d",&l,&r);
				printf("%d\n",l == 1 ? d[-- r] : d[-- r] - d[l - 2]);
			}else{
				scanf("%d",&x);
				printf("%d\n",a[--x]);
			}
		}
	}

	return 0;
}

