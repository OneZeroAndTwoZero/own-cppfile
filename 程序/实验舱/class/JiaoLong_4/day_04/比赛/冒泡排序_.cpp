#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> > a;
int n,k,x;

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&x);
		a.push(x);
		if(i >= k){
			printf("%d ",a.top());
			a.pop();
		}
	}
	for(int i = 0;i < k;i++){
		printf("%d ",a.top());
		a.pop();
	}
	puts("");

	return 0;
}

