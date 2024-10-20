#include<bits/stdc++.h>
using namespace std;

double n,x,y;
int num,other;

int main(){
	scanf("%lf %lf %lf",&n,&x,&y);
	num = ceil(y / x);
	other = n - num;
	printf("%d\n",other);
	
	return 0;
}
