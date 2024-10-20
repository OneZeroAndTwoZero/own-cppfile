#include<bits/stdc++.h>
using namespace std;

void caozuo(){
	for(int i = 1;i <= 9;i++){
		for(int j = 1;j <= i;j++){
			printf("%d * %d = %-2d ",j,i,j * i);
		}
		printf("\n");
	}
	for(int i = 9;i >= 1;i--){
		for(int j = i;j >= 1;j--){
			printf("%d * %d = %-2d ",j,i,j * i);
		}
		printf("\n");
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		caozuo();
	}
	
	return 0;
} 
