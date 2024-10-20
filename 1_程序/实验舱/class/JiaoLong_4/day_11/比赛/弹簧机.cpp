#include<bits/stdc++.h>
using namespace std;

struct ball{
	int step,di;
};
int n;
int d[1000005] = {0};
bool ok[1000005] = {0};
queue<int> sheng;

int bfs(){
	queue<ball> q;
	q.push({0,0});
	ok[0] = 1;
	while(q.size()){
		ball t = q.front();
		q.pop();
		if(t.di >= n){
			return t.step;
		}
		if(!ok[t.di + d[t.di]]){
			q.push({t.step + 1,t.di + d[t.di]});
			ok[t.di + d[t.di]] = 1;
		}
		while(sheng.size()){
			if(sheng.front() >= t.di) break;
			if(!ok[sheng.front()]){
				q.push({t.step + 1,sheng.front()});
			}
			sheng.pop();
		}
	}
	return -1;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&d[i]);
		sheng.push(i);
	}
	printf("%d\n",bfs());

	return 0;
}

