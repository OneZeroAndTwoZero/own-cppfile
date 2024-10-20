#include<bits/stdc++.h>
using namespace std;

int f[100005],num[100005];
int co[100005][7];
char ch;
int n,q,k,a,b,t;

int find(int x){
	if(f[x] == x) return x;
	f[x] = find(f[x]);
	return f[x];
}

void hebin(int a,int b){
	int fa = find(a),fb = find(b);
	if(fa != fb){
		num[fa] += num[fb];
		f[fb] = fa;
		for(int i = 1;i <= 5;i++){
			co[fa][i] += co[fb][i];
		}
	}
}

void out(int x){
	for(int i = 1;i <= 5;i++){
		if(co[x][i] != 0){
			printf("%d ",co[x][i]);
		}
	}
	printf("\n");
}

int main(){
	scanf("%d %d %d",&n,&k,&q);
	for(int i = 1;i <= n;i++){
		scanf("%d",&t);
		co[i][t] ++;
		num[i] = 1;
		f[i] = i;
	}
	while(q --){
		ch = '0';
		while(ch != 'M' && ch != 'D' && ch != 'C'){
			scanf("%s",&ch);
		}
		if(ch == 'M'){
			scanf("%d %d",&a,&b);
			hebin(a,b);
		}else if(ch == 'C'){
			scanf("%d %d",&a,&b);
			if(find(a) == find(b)){
				out(find(a));
			}else{
				printf("-1\n");
			}
		}else{
			scanf("%d %d",&a,&b);
			if(find(a) == find(b)){
				printf("1\n");
			}else{
				printf("-1\n");
			}
		}
	}

	return 0;
}

