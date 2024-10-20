#include<bits/stdc++.h>
using namespace std;

int n,t,n1,n2;
long long ans = 0;
priority_queue<int,vector<int>,greater<int> > q;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		q.push(t);
	}
	while(q.size() > 1){
		n1 = q.top();
		q.pop();
		n2 = q.top();
		q.pop();
		ans += n1 + n2;
		q.push(n1 + n2);
	}
	printf("%lld\n",ans);

	return 0;
}

