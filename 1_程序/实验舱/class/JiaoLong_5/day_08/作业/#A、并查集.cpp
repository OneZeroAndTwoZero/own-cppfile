#include<bits/stdc++.h>
using namespace std;

int f[100005];
char ch;
int n,m,a,b;

int find(int x){
	if(f[x] == x) return x;
	f[x] = find(f[x]);
	return f[x];
}

void hebin(int a,int b){
	f[find(a)] = find(b);
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++){
		f[i] = i;
	}
	while(m --){
		ch = '0';
		while(ch != 'M' && ch != 'Q'){
			scanf("%s",&ch);
		}
		scanf("%d %d",&a,&b);
		if(ch == 'M'){
			hebin(a,b);
		}else{
			if(find(a) == find(b)){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}
	}

	return 0;
}

