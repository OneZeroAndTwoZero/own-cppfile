#include<bits/stdc++.h>
using namespace std;

void cz(){
	int n;
	scanf("%d",&n);
	if(!n) return;
	cz();
	printf("%d ",n);
}

int main(){
	cz();

	return 0;
}

