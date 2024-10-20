#include<bits/stdc++.h>
using namespace std;

priority_queue<int> a;
int n,q,t,check;

int main(){
	scanf("%d %d",&n,&q);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a.push(t);
	}
	for(int i = 0;i < q && a.top() != 1;i++){
		check = a.top();
		a.pop();
		if(!a.size()){
			a.push(ceil((double)check / (q + 1)));
			break;
		}
		int bs = ceil((double)check / a.top());
		bs = min(bs,q + 1);
		for(int i = 0;i < bs;i++){
		    a.push(check / (bs - i));
		    check -= check / (bs - i);
		}
		q -= bs - 1;
	}
	printf("%d\n",a.top());

	return 0;
}

