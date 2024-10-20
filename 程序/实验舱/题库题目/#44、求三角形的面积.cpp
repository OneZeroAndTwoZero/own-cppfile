#include<bits/stdc++.h>
using namespace std;

int d,h;
double S;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d %d",&d,&h);
	S = d * h / 2.0;
	printf("%.2lf",S);
	
	return 0;
}
