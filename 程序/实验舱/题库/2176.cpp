#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1,b1,a2,b2;
	double ans1,ans2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	ans1 = (double)a1 / b1;
	ans2 = (double)a2 / b2;
	if(ans1 == ans2){
		printf("%d/%d = %d/%d",a1,b1,a2,b2);
	}else if(ans1 < ans2){
		printf("%d/%d < %d/%d",a1,b1,a2,b2);
	}else{
		printf("%d/%d > %d/%d",a1,b1,a2,b2);
	}

	return 0;
}

