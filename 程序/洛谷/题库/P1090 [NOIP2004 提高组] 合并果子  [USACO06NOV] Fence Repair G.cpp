#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> > q;
int n,t,ans = 0,num1,num2;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&t);
		q.push(t);
	}
	while(q.size() > 1){
		num1 = q.top();
		q.pop();
		num2 = q.top();
		q.pop();
		ans += num1 + num2;
		q.push(num2 + num1);
	}
	printf("%d\n",ans);

	return 0;
}

