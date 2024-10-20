#include<bits/stdc++.h>
using namespace std;

int t;
int n,k,p,max_;
map<int,int> m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&k);
		max_ = 0;
		m.clear();
		for(int i = 0;i < n;i ++){
			scanf("%d",&p);
			m[p] ++;
		}
		map<int,int> :: iterator it;
		for(it = m.begin();it != m.end();it ++){
			max_ = max(max_,it -> second);
		}
		if(max_ * k > n){
			printf("F\n");
		}else{
			printf("T\n");
		}
	}

	return 0;
}

