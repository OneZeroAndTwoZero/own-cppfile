#include<bits/stdc++.h>
using namespace std;

int n,m;
string op;
int idx;
long long t;
stack<long long> a[1005];
long long ans[1005] = {0};

long long ti(int i){
	int t1,t2;
	t1 = abs(a[i].top());
	a[i].pop();
	while(a[i].size()){
		t2 = a[i].top();
		a[i].pop();
		if(t2 > 0){
			ans[i] += abs(t2 - t1);
		}else{
			t1 = abs(t2);
		}
		cout << t1 << "[][]" << t2 << endl;
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		cin >> op;
		scanf("%d %lld",&idx,&t);
		if(op == "end") t = -1 * t;
		a[idx].push(t);
	}
	for(int i = 1;i <= n;i++){
		ti(i);
		printf("%d\n",ans[i]);
	}

	return 0;
}

