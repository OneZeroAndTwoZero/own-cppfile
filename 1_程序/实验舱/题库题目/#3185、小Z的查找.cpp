#include<bits/stdc++.h>
using namespace std;

int n,x,ansn,ansx;
int a[100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(int i = n - 1;i >= 0;i--){
		if(a[i] == x){
			ansn ++;
			ansx = i + 1;
		}
	}
	if(ansn == 0){
		printf("no\n");
	}else{
		printf("%d %d\n",ansx,ansn);
	}

	return 0;
}

