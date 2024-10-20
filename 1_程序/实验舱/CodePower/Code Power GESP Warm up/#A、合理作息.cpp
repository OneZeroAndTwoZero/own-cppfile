#include<bits/stdc++.h>
using namespace std;

int s,e,t;

int main(){
	scanf("%d %d",&s,&e);
	t = e + 24 - s;
	printf("%d\n",t);
	if(t >= 8 && t <= 10 && s <= 23 && s >= 20 && e <= 9 && e >= 6){
		printf("Healthy\n");
	}else{
		printf("Unhealthy\n");
	}

	return 0;
}

