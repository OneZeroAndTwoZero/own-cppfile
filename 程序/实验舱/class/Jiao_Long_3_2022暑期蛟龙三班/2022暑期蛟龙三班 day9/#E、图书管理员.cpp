#include<bits/stdc++.h>
using namespace std;

int n,q,t,f,w;
map<int,int> zhao,vis;

int p(int a,int b){
	int ans = 1;
	for(int i = 0;i < b;i++){
		ans *= a;
    }
	return ans;
}

int ws_(int a){
	if(!a) return 1;
	int re = 0;
	while(a){
		re ++;
		a /= 10;
	}
	return re;
}

int main(){
	scanf("%d %d",&n,&q);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		f = t;
		w = ws_(t);
		while(t){
			t = t % p(10,w);
			if(vis[t]){
				zhao[t] = min(f,zhao[t]);
			}else{
				vis[t] = 1;
				zhao[t] = f;
			}
			w--;
		}
	}
	for(int i = 0;i < q;i++){
		scanf("%d %d",&f,&t);
		if(!vis[t]){
			printf("-1\n");
		}else{
			printf("%d\n",zhao[t]);
		}
	}

	return 0;
}

