#include<bits/stdc++.h>
using namespace std;

bool a[11000005] = {0};
int p[4500005] = {0};
int n,pos = 0;

void olshai(){
	for(int i = 2;i <= n;i++){
		 if(!a[i]){
		     p[pos ++] = i;
		     printf("%d ",i);
		 }
		 for(int j = 0;j < pos && p[j] <= n / i;j++){
		 	a[i * p[j]] = 1;
		 	if(i % p[j] == 0) break;
		 }
	}
}

int main(){
	scanf("%d",&n);
	olshai();

	return 0;
}

