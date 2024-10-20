#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0},pos = 0,sum = 0;
int ans[100005],now = 0;

int main(){
	scanf("%d",&sum);
	while(~scanf("%d",&a[pos])){
		pos ++;
	}
	for(int i = 0;i < pos;i ++){
		for(int j = 0;j < a[i];j ++){
			ans[now++] = (i % 2);
		}
	}
	for(int i = 0;i < sum;i ++){
		for(int j = 0;j < sum;j ++){
			printf("%d",ans[i * sum + j]);
		}
		printf("\n");
	}
	

	return 0;
}

