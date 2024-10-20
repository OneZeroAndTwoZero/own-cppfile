#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	scanf("%d",&n);
	if(n <= 150){
		printf("%.1lf\n",0.4463 * n);
	}else if(n <= 400){
		printf("%.1lf\n",0.4463 * 150 + 0.4663 * (n - 150));
	}else{
		printf("%.1lf\n",0.4463 * 150 + 0.4663 * 250 + 0.5663 * (n - 400));
	}

	return 0;
}

