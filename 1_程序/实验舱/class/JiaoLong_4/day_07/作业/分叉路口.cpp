#include<bits/stdc++.h>
using namespace std;

int n,k;

int qun(int t){
	if(t <= 0) return 0;
	if(t > k + 1 && (t - k) % 2 == 0){
		return qun((t - k) / 2) + qun((t - k) / 2 + k);
	}
	return 1;
}

int main(){
	scanf("%d %d",&n,&k);
	printf("%d\n",qun(n));

	return 0;
}

