#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0},b[100005] = {0};
int n,t;

bool ok(){
	for(int i = 1;i <= n;i++){
		if(a[i] != b[i]) return 0;
	}
	return 1;
}

int main(){
	scanf("%d %d",&n,&t);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	while(t --){
		for(int i = 1;i <= n;i++){
			scanf("%d",&b[i]);
		}
		if(ok()){
			printf("Yes\n");
		}else if(n >= 3){
			b[2] = b[1] + b[3] - b[2];
			if(ok()){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}else{
			printf("No\n");
		}
	}

	return 0;
}

