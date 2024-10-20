#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,e,cfx_3,out;
double time_;

int main(){
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	cfx_3 = a * b * c,out = d - e;
	time_ = (double)cfx_3 / out;
	printf("%.2lf\n",time_);
	
	return 0;
}
