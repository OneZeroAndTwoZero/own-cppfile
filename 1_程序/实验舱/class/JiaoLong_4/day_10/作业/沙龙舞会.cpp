#include<bits/stdc++.h>
using namespace std;

queue<int> d1,d2;
int n1,n2,m;

int main(){
	scanf("%d %d %d",&n1,&n2,&m);
	for(int i = 1;i <= n1;i++) d1.push(i);
	for(int i = 1;i <= n2;i++) d2.push(i);
	for(int i = 0;i < m;i++){
		printf("%d %d\n",d1.front(),d2.front());
		d1.push(d1.front());
		d2.push(d2.front());
		d1.pop(),d2.pop();
	}

	return 0;
}

