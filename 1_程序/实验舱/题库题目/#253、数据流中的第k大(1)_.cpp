#include<bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int n,m,k,t;

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
			q.pop();
		}
		printf("%d ",q.top());
	}

	return 0;
}

