#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>, greater<int>> q;
priority_queue<int> tem;
int n,m,k,t,h;

int main(){
	scanf("%d %d %d",&n,&m,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		q.push(t);
	}
	for(int i = 0;i < m;i++){
		scanf("%d",&t);
		q.push(t);
		while(q.size() > k){
			tem.push(q.top());
			q.pop();
		}
		printf("%d ",q.top());
		q.pop();
		q.push(tem.top());
		tem.pop();
	}
	printf("\n");

	return 0;
}

