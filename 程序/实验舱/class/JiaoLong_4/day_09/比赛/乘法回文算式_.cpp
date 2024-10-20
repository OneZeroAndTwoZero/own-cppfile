#include<bits/stdc++.h>
using namespace std;

struct shu{
	int e;
	int ji;
};

long long n;
int pos = 0;
int check[100] = {0};
bool ans[100] = {0};

shu out1[1000005];
shu out2[1000005];
int pos1 = 0,pos2 = 0;
//set<string> out;

void cz(long long a){
	while(a){
		check[++ pos] = a % 10;
		a /= 10;
	}
}

void dfs(int k){
	if(k == pos){
		int now = 0,sum = 1,er = 0;
		ans[pos] = 1;
		for(int i = 1;i <= pos;i ++){
			er = (er << 1);
			now = now * 10 + check[i];
			if(ans[i]){
				er ++;
				sum *= now;
				now = 0;
			}
		}
		out1[pos1 ++] = {er,sum};
		return;
	}
	ans[k] = 1;
	dfs(k + 1);
	
	ans[k] = 0;
	dfs(k + 1);
}

void dfs2(int k){
	if(k == 1){
		int now = 0,sum = 1,er = 0;
		ans[1] = 1;
		for(int i = pos;i >= 1;i --){
			er = (er << 1);
			now = now * 10 + check[i];
			if(ans[i]){
				er ++;
				sum *= now;
				now = 0;
			}
		}
		out2[pos2 ++] = {er,sum};
		return;
	}
	ans[k] = 1;
	dfs(k + 1);
	
	ans[k] = 0;
	dfs(k + 1);
}

bool cmp(shu a,shu b){
	return a.e < b.e;
}

int main(){
	scanf("%lld",&n);
	cz(n);
	dfs(1);
	dfs2(pos);
	sort(out1,out1 + pos1,cmp);
	sort(out2,out2 + pos2,cmp);
	int i = 0,j = 0;
	while(i < pos1 && j < pos2){
		if(out1[i].ji == out2[j].ji){
			printf("%d = %d",out1[i].e,out2[j].e);
		}else if(out1[i].ji < out2[j].ji){
			i ++;
		}else{
			j ++;
		}
	}

	return 0;
}

