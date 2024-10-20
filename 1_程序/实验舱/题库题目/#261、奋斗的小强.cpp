#include<bits/stdc++.h>
using namespace std;

struct dian{
	int st,u;
};

int q_,t;
queue<dian> q;
int ans[1000005];

void bfs(){
	q.push({0,0});
	while(q.size()){
		auto tem = q.front();
		q.pop();
		int tu = tem.u - 1;
		if(tu > 0 && !ans[tu]){
			q.push({tem.st + 1,tu});
			ans[tu] = tem.st + 1;
		}
		tu = tem.u + 1;
		if(tu <= 1e6 && !ans[tu]){
			q.push({tem.st + 1,tu});
			ans[tu] = tem.st + 1;
		}
		tu = tem.u * 2;
		if(tu > 0 && tu <= 1e6 && !ans[tu]){
			q.push({tem.st + 1,tu});
			ans[tu] = tem.st + 1;
		}
	}
}

int main(){
	scanf("%d",&q_);
	bfs();
	while(q_ --){
		scanf("%d",&t);
		printf("%d\n",ans[abs(t)]);
	}

	return 0;
}

