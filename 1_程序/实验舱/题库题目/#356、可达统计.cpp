#include<bits/stdc++.h>
using namespace std;

int n,m,u,v;
vector<int> a[300005];

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
	}
	for(int i = 1;i <= n;i++){
		printf("%d\n",a[i].size() + 1);
	}

	return 0;
}

