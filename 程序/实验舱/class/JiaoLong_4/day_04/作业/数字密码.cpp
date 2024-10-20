#include<bits/stdc++.h>
using namespace std;

int t,n;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		if(!(n % 3)){
			for(int i = 0;i * 3 < n;i++){
				printf("21");
			}
		}else if(n % 3 == 1){
			printf("1");
			n --;
			for(int i = 0;i * 3 < n;i++){
				printf("21");
			}
		}else{
			printf("2");
			n -= 2;
			for(int i = 0;i * 3 < n;i++){
				printf("12");
			}
		}
		puts("");
	}

	return 0;
}

