#include<bits/stdc++.h>
using namespace std;

struct y{
	string l;
	int i;
	long long ts;
};

int n,m;
stack<y> a;
string op;
int idx;
long long t;
long long ans[10005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		cin >> op;
		scanf("%d %lld",&idx,&t);
		if(op == "start"){
			if(!a.size()){
				a.push({op,idx,t});
			}else{
				y tem = a.top();
				if(tem.l == "end"){
					a.pop();
					a.push({op,idx,t});
				}else{
					a.pop();
					ans[tem.i] += abs(t - tem.ts);
					a.push({op,idx,t});
				}
			}
		}else{
			y tem = a.top();
			if(tem.l == "start"){
				ans[tem.i] += abs(t - tem.ts) + 1;
				a.pop();
				a.push({op,idx,t});
			}else{
				a.pop();
				ans[idx] += abs(t - tem.ts);
				a.push({op,idx,t});
			}
		}
	}
	for(int i = 1;i <= n;i++){
		printf("%d\n",ans[i]);
	}

	return 0;
}

