#include<bits/stdc++.h>
using namespace std;

int f[100005],num[100005];
char ch;
int n,m,a,b;

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
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++){
		num[i] = 1;
		f[i] = i;
	}
	while(m --){
		ch = '0';
		while(ch != 'M' && ch != 'Q' && ch != 'C'){
			scanf("%s",&ch);
		}
		if(ch == 'M'){
			scanf("%d %d",&a,&b);
			hebin(a,b);
		}else if(ch == 'Q'){
			scanf("%d %d",&a,&b);
			if(find(a) == find(b)){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}else{
			scanf("%d",&a);
			printf("%d\n",num[find(a)]);
		}
	}

	return 0;
}

