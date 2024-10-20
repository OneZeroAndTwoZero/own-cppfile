#include<bits/stdc++.h>
using namespace std;

int n,m;
bool flag;

int main(){
	scanf("%d %d",&n,&m);
	flag = !(n % m);
	printf("%d\n",flag);
	
	return 0;
}
