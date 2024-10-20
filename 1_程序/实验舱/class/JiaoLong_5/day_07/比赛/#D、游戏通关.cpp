#include<bits/stdc++.h>
using namespace std;

int n,m,k,t,op,now = 1;
vector<int> a[100005];
int cd[1005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&k);
		while(k --){
			scanf("%d",&t);
			a[i].push_back(t);
		}
	}
	while(m --){
		scanf("%d",&op);
		if(op == 0){
			scanf("%d",&t);
			now = a[now][-- t];
		}else if(op == 1){
			scanf("%d",&t);
			printf("%d\n",now);
			cd[t] = now;
		}else{
			scanf("%d",&t);
			now = cd[t];
		}
	}
	printf("%d\n",now);

	return 0;
}

