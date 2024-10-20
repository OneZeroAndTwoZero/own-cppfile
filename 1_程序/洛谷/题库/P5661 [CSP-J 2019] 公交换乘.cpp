#include<bits/stdc++.h>
using namespace std;

struct node{
	int q,ti;
	bool y;
};

node a[2000005];
int n = 0,k = 0,ans = 0;
int g,p,t;
int now = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d %d",&g,&p,&t);
		if(g == 0){
		    a[k].q = p;
			a[k].y = 1;
			a[k ++].ti = t;
			ans += p;
		}else{
			bool tem = 0;
			while(a[now].ti < t - 45 && now < k) now ++;
			int pao = now;
			while(pao < k){
				if(a[pao].y && a[pao].q >= p){
					a[pao].y = 0;
					tem = 1;
					break;
				}
				pao ++;
			}
			if(!tem) ans += p;
		}
	}
	printf("%d\n",ans);

	return 0;
}

