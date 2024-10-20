#include<bits/stdc++.h>
using namespace std;

int n,t;
double a;
bool ok[2000005] = {0};

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%lf %d",&a,&t);
		for(int i  = 1;i <= t;i ++){
			int pos = floor(a * i);
			ok[pos] = !ok[pos];
		}
	}
	for(int i = 1;i < 2000005;i ++){
		if(ok[i]){
			printf("%d\n",i);
			return 0;
		}
	}

	return 0;
}

