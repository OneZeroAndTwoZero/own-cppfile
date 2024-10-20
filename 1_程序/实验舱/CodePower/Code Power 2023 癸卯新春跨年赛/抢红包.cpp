#include<bits/stdc++.h>
using namespace std;

int n,m;

void out(double a){
	if(a == (int)a){
		printf("%.0lf\n",a);
	}else if(a * 10 == (int)(a * 10)){
		printf("%.1lf\n",a);
	}else{
		printf("%.2lf\n",a);
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m - 1;i++){
		printf("%.2lf\n",0.01);
	}
	out((double)n - 0.01 * (m - 1));

	return 0;
}

