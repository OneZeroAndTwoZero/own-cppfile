#include<bits/stdc++.h>
using namespace std;

struct bian{
	int u,v,w,ch;
	bool operator < (const bian &a) const{
		return w < a.w;
	}
};

int n,m,pos = 0,num[4] = {0};
bian e[300005];

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d %d %c",&e[pos].u,&e[pos].v,&e[pos].w,&e[pos].ch);
		if(e[pos].ch == 'R') num[0] ++;
		else if(e[pos].ch == 'G') num[1] ++;
		else num[2] ++;
		pos ++;
	}
	sort(e,e + pos);
	for(int i = n - 1;i <= m;i++){
		if(num[0] + num[1] < i && num[1] + num[2] < i){
			printf("-1\n");
			continue;
		}else{
			
		}
	}

	return 0;
}

